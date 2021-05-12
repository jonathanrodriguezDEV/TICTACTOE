///////////////////////////////////////////////////////////////////////////////
/// @author Jonathan Rodriguez
/// @date 7 May 2019
/// @brief File the intance of the tictactoe object.
///
///////////////////////////////////////////////////////////////////////////////

#include "tictactoe.h"

int main(){
  tictactoe x; 
  /// While no one has won and the board is not full, ask for moves.   
  while(!x.winnerCheck() && !x.boardFull()){
    x.askMove();
  }

  /// Check if someone has wone the game.
  if(x.winnerCheck()){
    x.congratsWinner();
  }
  /// If nobody has one, the game is a tie.
  else{
    x.tie();
  }
}
