#include "RockPaperScissors.h"

Result_t RockPaperScissors_Play(Move_t player1, Move_t player2)
{
  if (player1 == player2)
  {
    return Result_Draw;
  }
  else if (
      (player1 == Move_Paper && player2 == Move_Scissors) ||
      (player1 == Move_Scissors && player2 == Move_Rock))
  {
    return Result_Lose;
  }
  return Result_Win;
}
