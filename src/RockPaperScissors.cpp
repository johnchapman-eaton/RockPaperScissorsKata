#include "RockPaperScissors.h"

bool Player1Loses(Move_t player1, Move_t player2)
{
  return (player1 == Move_Rock && player2 == Move_Paper) ||
         (player1 == Move_Paper && player2 == Move_Scissors) ||
         (player1 == Move_Scissors && player2 == Move_Rock);
}

Result_t RockPaperScissors_Play(Move_t player1, Move_t player2)
{
  if (player1 == player2)
  {
    return Result_Draw;
  }
  else if (Player1Loses(player1, player2))
  {
    return Result_Lose;
  }
  else
  {
    return Result_Win;
  }
}
