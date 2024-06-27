#include <gtest/gtest.h>
#include "RockPaperScissors.h"

class RockPaperScissors_test : public ::testing::Test
{
};

TEST_F(RockPaperScissors_test, Player1ShouldLoseWhenPlayer1PlaysScissorsAndPlayer2PlaysRock)
{
  EXPECT_EQ(Result_Lose, RockPaperScissors_Play(Move_Scissors, Move_Rock));
}

TEST_F(RockPaperScissors_test, Player1ShouldWinWhenPlayer1PlaysScissorsAndPlayer2PlaysPaper)
{
  EXPECT_EQ(Result_Win, RockPaperScissors_Play(Move_Scissors, Move_Paper));
}

TEST_F(RockPaperScissors_test, TheyShouldDrawWhenBothPlayersPlayScissors)
{
  EXPECT_EQ(Result_Draw, RockPaperScissors_Play(Move_Scissors, Move_Scissors));
}
