cmake_minimum_required(VERSION 3.14)

include(GoogleTest)

project(test_suite)

set(CMAKE_CXX_STANDARD 14)

enable_testing()

include(FetchContent)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.12.1
)
FetchContent_MakeAvailable(googletest)
add_library(GTest::GTest INTERFACE IMPORTED)
target_link_libraries(GTest::GTest INTERFACE gtest_main)

set(GIT_DIR_LOOKUP_POLICY ALLOW_LOOKING_ABOVE_CMAKE_SOURCE_DIR)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g -O0 -Wall -fprofile-arcs -ftest-coverage -fprofile-generate -Wno-unused-function")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -O0 -Wall -fprofile-arcs -ftest-coverage -fprofile-generate -Wno-unused-function")

include_directories(
  src
)

add_executable(
  test_suite
  src/RockPaperScissors.cpp
  test/RockPaperScissors_test.cpp
)

target_link_libraries(
  test_suite
  PRIVATE GTest::gtest_main
)

add_custom_target(coverage
  COMMAND find . -name "*.gcda" -delete
  COMMAND ./test_suite
  COMMAND gcovr -r ${PRODUCTION_CODE} .
  DEPENDS test_suite)

add_custom_target(coverage-report
  COMMAND find . -name "*.gcda" -delete
  COMMAND ./test_suite
  COMMAND mkdir -p coverage
  COMMAND gcovr -b -d -r ../../src . --html-details coverage/report.html
  DEPENDS test_suite)

file(GLOB_RECURSE complexity_list "../src/*.c" "../src/*.cpp" "../src/*.cc" "../src/*.h")

add_custom_target(complexity
  COMMAND pmccabe ${complexity_list} | sort -nr | head -100)

add_custom_target(run-tests DEPENDS test_suite
  COMMAND ./test_suite
)

gtest_discover_tests(test_suite)
