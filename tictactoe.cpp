///////////////////////////////////////////////////////////////////////////////
/// @author Jonathan Rodriguez
/// @date 7 May 2019
/// @brief File contains definitions tictactoe game functions.
///
///////////////////////////////////////////////////////////////////////////////

#include "tictactoe.h"
#include "TextAnimator.h"

#include <iostream>

///////////////////////////////////////////////////////////////////////////
/// @brief Default Constructor
/// @param _text String to print as the title of the game.
///
tictactoe::tictactoe(){ 
  TextAnimator::titlePrint("Tic Tac Toe");
  TextAnimator::slowPrint("***** A game by Jonathan Rodriguez! *****");
  std::cout<<std::endl<<std::endl;
  count = 1;
}

///////////////////////////////////////////////////////////////////////////
/// @brief Ask players for move 
///
void tictactoe::askMove(){
  std::string currentMove;
  if(count%2 == 0){
    TextAnimator::slowPrint("Player X.  Your turn!!");
    std::cout<<std::endl;
  }
  else{
    TextAnimator::slowPrint("Player O.  Your turn!!");
    std::cout<<std::endl;
  }

  board.displayGrid();        
  TextAnimator::slowPrint("Where would you like to move: ");
  std::cin>>currentMove;
  count = board.makeMove(count, currentMove);;
}

/////////////////////////////////////////////////////////////////////////// 
/// @brief Checks if a board is full
/// @return True if the board is full, false otherwise.
///
bool tictactoe::boardFull(){
  for(int i = 0; i<3; i++){
    for(int j = 0; j<3; j++){
      if(board.getValue(i,j)== "1" ||board.getValue(i,j)== "2" ||board.getValue(i,j)== "3" ||board.getValue(i,j)== "4" || board.getValue(i,j)== "5" ||
      board.getValue(i,j)== "6" ||board.getValue(i,j)== "7" ||board.getValue(i,j)== "8" ||board.getValue(i,j)== "9"){
        return false;
      }   
    }
  } 
  return true;   
}

///////////////////////////////////////////////////////////////////////////
/// @brief Reveals winner of the game
///
void tictactoe::congratsWinner(){
  count--;
  board.displayGrid();  
  if(count%2 == 0){
    TextAnimator::slowPrint("Congrats Player X.  You Win!!");
    std::cout<<std::endl;
  }
  else{
    TextAnimator::slowPrint("Congrats Player O.  You Win!!");
    std::cout<<std::endl;
  }
}

///////////////////////////////////////////////////////////////////////////
/// @brief Checks which move the game is on
/// @return Number of moves that have been made.
///
int tictactoe::getCount(){return count;}

///////////////////////////////////////////////////////////////////////////
/// @brief Reveals game is a tie
///
void tictactoe::tie(){
  board.displayGrid();  
  TextAnimator::slowPrint("It's a Tie");
  std::cout<<std::endl;
    
}

///////////////////////////////////////////////////////////////////////////
/// @brief Checks if a player has won
/// @return True if there is a winner, false otherwise.
///
bool tictactoe::winnerCheck(){ //Checks all possible win scenarios.  Returns true if one is acheived 
  if(board.getValue(0,0)== board.getValue(1,0) && board.getValue(0,0)== board.getValue(2,0) && board.getValue(1,0)== board.getValue(2,0)){
    return true;
  }
  else if(board.getValue(0,1)== board.getValue(1,1) && board.getValue(0,1)== board.getValue(2,1) && board.getValue(1,1)== board.getValue(2,1)){
    return true;
  }
  else if(board.getValue(0,2)== board.getValue(1,2) && board.getValue(0,2)== board.getValue(2,2) && board.getValue(1,2)== board.getValue(2,2)){
    return true;
  }

  else if(board.getValue(0,0)== board.getValue(0,1) && board.getValue(0,0)== board.getValue(0,2) && board.getValue(0,1)== board.getValue(0,2)){
    return true;
  }
  else if(board.getValue(1,0)== board.getValue(1,1) && board.getValue(1,0)== board.getValue(1,2) && board.getValue(1,1)== board.getValue(1,2)){
    return true;
  }
  else if(board.getValue(2,0)== board.getValue(2,1) && board.getValue(2,0)== board.getValue(2,2) && board.getValue(2,1)== board.getValue(2,2)){
    return true;
  }

  else if(board.getValue(0,0)== board.getValue(1,1) && board.getValue(0,0)== board.getValue(2,2) && board.getValue(1,1)== board.getValue(2,2)){
    return true;
  }
    else if(board.getValue(2,0)== board.getValue(1,1) && board.getValue(2,0)== board.getValue(0,2) && board.getValue(1,1)== board.getValue(0,2)){
    return true;
  }
  else{
    return false;
  }
}