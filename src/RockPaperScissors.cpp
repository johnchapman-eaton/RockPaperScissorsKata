#include "RockPaperScissors.h"

Result_t RockPaperScissors_Play(Move_t player1, Move_t player2) {
  if(player1 == player2) {
    return Result_Draw;
  }
  else if(player2 == Move_Rock) {
    return Result_Lose;
  }
  return Result_Win;
}
