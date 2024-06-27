#include "RockPaperScissors.h"

Result_t RockPaperScissors_Play(Move_t player1, Move_t player2) {
  if(player2 == Move_Rock) {
    return Result_Lose;
  }
  else if(player2 == Move_Scissors) {
    return Result_Draw;
  }
  return Result_Win;
}
