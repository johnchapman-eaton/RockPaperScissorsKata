#include <gtest/gtest.h>
#include <RockPaperScissors.h>

class RockPaperScissors_Test : public ::testing::Test
{
protected:
   void SetUp() override
   {
   }

   void TearDown() override
   {
   }
};

// Rock/Rock: Tie
// Rock/Paper: Player1 Loses
// Rock/Scissors: Player1 Wins
// Paper/Rock: Player1 Wins
// Paper/Scissors: Player1 Loses
// Paper/Paper: Tie
// Scissors/Rock: Player1 Loses
// Scissors/Paper: Player1 Wins
// Scissors/Scissors: Tie

TEST_F(RockPaperScissors_Test, PlayerOnePlaysRockPlayerTwoPlaysRock_Tie)
{
   EXPECT_EQ("Tie", RockPaperScissors_Play("Rock", "Rock"));
}

TEST_F(RockPaperScissors_Test, PlayerOnePlaysRockPlayerTwoPlaysPaper_Player1Loses)
{
   EXPECT_EQ("Loses", RockPaperScissors_Play("Rock", "Paper"));
}

TEST_F(RockPaperScissors_Test, PlayerOnePlaysRockPlayerTwoPlaysScissors_Player1Wins)
{
   EXPECT_EQ("Wins", RockPaperScissors_Play("Rock", "Scissors"));
}

TEST_F(RockPaperScissors_Test, PlayerOnePlaysPaperPlayerTwoPlaysRock_Player1Wins)
{
   EXPECT_EQ("Wins", RockPaperScissors_Play("Paper", "Rock"));
}

TEST_F(RockPaperScissors_Test, PlayerOnePlaysPaperPlayerTwoPlaysScissors_Player1Loses)
{
   EXPECT_EQ("Loses", RockPaperScissors_Play("Paper", "Scissors"));
} 

TEST_F(RockPaperScissors_Test, PlayerOnePlaysPaperPlayerTwoPlaysPaper_Tie)
{
   EXPECT_EQ("Tie", RockPaperScissors_Play("Paper", "Paper"));
}

TEST_F(RockPaperScissors_Test, PlayerOnePlaysScissorsPlayerTwoPlaysRock_Player1Loses)
{
   EXPECT_EQ("Loses", RockPaperScissors_Play("Scissors", "Rock"));
}

TEST_F(RockPaperScissors_Test, PlayerOnePlaysScissorsPlayerTwoPlaysPaper_Player1Wins)
{
   EXPECT_EQ("Wins", RockPaperScissors_Play("Scissors", "Paper"));
}

TEST_F(RockPaperScissors_Test, PlayerOnePlaysScissorsPlayerTwoPlaysScissors_Tie)
{
   EXPECT_EQ("Tie", RockPaperScissors_Play("Scissors", "Scissors"));
}