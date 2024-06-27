#include <gtest/gtest.h>
#include "RockPaperScissors.h"

class RockPaperScissors_test : public ::testing::Test
{
};

TEST_F(RockPaperScissors_test, TheyShouldDrawWhenBothPlayersPlayRock)
{
  EXPECT_EQ(Result_Draw, RockPaperScissors_Play(Move_Rock, Move_Rock));
}

TEST_F(RockPaperScissors_test, TheyShouldDrawWhenBothPlayersPlayPaper)
{
  EXPECT_EQ(Result_Draw, RockPaperScissors_Play(Move_Paper, Move_Paper));
}

TEST_F(RockPaperScissors_test, TheyShouldDrawWhenBothPlayersPlayScissors)
{
  EXPECT_EQ(Result_Draw, RockPaperScissors_Play(Move_Scissors, Move_Scissors));
}

TEST_F(RockPaperScissors_test, Player1ShouldWinWhenPlayer1PlaysRockAndPlayer2PlaysScissors)
{
  EXPECT_EQ(Result_Win, RockPaperScissors_Play(Move_Rock, Move_Scissors));
}

TEST_F(RockPaperScissors_test, Player1ShouldLoseWhenPlayer1PlaysRockAndPlayer2PlaysScissors)
{
  EXPECT_EQ(Result_Lose, RockPaperScissors_Play(Move_Scissors, Move_Rock));
}

TEST_F(RockPaperScissors_test, Player1ShouldWinWhenPlayer1PlaysPaperAndPlayer2PlaysRock)
{
  EXPECT_EQ(Result_Win, RockPaperScissors_Play(Move_Paper, Move_Rock));
}

TEST_F(RockPaperScissors_test, Player1ShouldLoseWhenPlayer1PlaysScissorsAndPlayer2PlaysRock)
{
  EXPECT_EQ(Result_Lose, RockPaperScissors_Play(Move_Rock, Move_Paper));
}

TEST_F(RockPaperScissors_test, Player1ShouldWinWhenPlayer1PlaysScissorsAndPlayer2PlaysPaper)
{
  EXPECT_EQ(Result_Win, RockPaperScissors_Play(Move_Scissors, Move_Paper));
}

TEST_F(RockPaperScissors_test, Player1ShouldLoseWhenPlayer1PlaysPaperAndPlayer2PlaysScissors)
{
  EXPECT_EQ(Result_Lose, RockPaperScissors_Play(Move_Paper, Move_Scissors));
}
