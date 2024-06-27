#include <gtest/gtest.h>
#include "RockPaperScissors.h"

class RockPaperScissors_test : public ::testing::TestWithParam<std::tuple<Move_t, Move_t, Result_t>>
{
};

TEST_P (RockPaperScissors_test, RockPaperScissorsTest)
{
  Move_t player1 = std::get<0>(GetParam());
  Move_t player2 = std::get<1>(GetParam());
  Result_t expected = std::get<2>(GetParam());

  EXPECT_EQ(expected, RockPaperScissors_Play(player1, player2));
}

INSTANTIATE_TEST_SUITE_P(
  RockPaperScissorsTests,
  RockPaperScissors_test,
  ::testing::Values(
    std::make_tuple(Move_Rock, Move_Rock, Result_Draw),
    std::make_tuple(Move_Paper, Move_Paper, Result_Draw),
    std::make_tuple(Move_Scissors, Move_Scissors, Result_Draw),

    std::make_tuple(Move_Rock, Move_Scissors, Result_Win),
    std::make_tuple(Move_Scissors, Move_Rock, Result_Lose),

    std::make_tuple(Move_Paper, Move_Rock, Result_Win),
    std::make_tuple(Move_Rock, Move_Paper, Result_Lose),

    std::make_tuple(Move_Scissors, Move_Paper, Result_Win),
    std::make_tuple(Move_Paper, Move_Scissors, Result_Lose)
  )
);
