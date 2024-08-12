#include "RockPaperScissors.h"

string RockPaperScissors_Play(string playerOneMove, string playerTwoMove)
{
    if (playerOneMove == "Rock")
    {
        if (playerTwoMove == "Paper")
            return "Loses";
        if (playerTwoMove == "Scissors")
            return "Wins";
    }
    if (playerOneMove == "Paper")
    {
        if (playerTwoMove == "Rock")
            return "Wins";
        if (playerTwoMove == "Scissors")
            return "Loses";
    }
    if (playerOneMove == "Scissors")
    {
        if (playerTwoMove == "Rock")
            return "Loses";
        if (playerTwoMove == "Paper")
            return "Wins";
    }

    return "Tie";
}
