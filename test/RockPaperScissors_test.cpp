#include <gtest/gtest.h>
#include "RockPaperScissors.h"

class RockPaperScissors_test : public ::testing::Test
{
protected:
   void SetUp() override
   {
   }

   void TearDown() override
   {
   }
};

TEST_F(RockPaperScissors_test, Player1ShouldLoseWhenPlayer1PlaysScissorsAndPlayer2PlaysRock)
{
  EXPECT_EQ(Result_Lose, RockPaperScissors_Play(Move_Scissors, Move_Rock));
}
