///////////////////////////////////////////////////////////////////////////////
/// @author Jonathan Rodriguez
/// @date 26 February 2019
/// @brief File contains a blueprint for a tictactoe grid.
///
///////////////////////////////////////////////////////////////////////////////

#ifndef _GRID_H_
#define _GRID_H_

#include <string>

class Grid {
  private:
    std::string m_grid[3][3];  ///< 3X3 grid for tictactoe play.

  public:
    ///////////////////////////////////////////////////////////////////////////
    /// @brief Default Constructor
    ///
    Grid();

    ///////////////////////////////////////////////////////////////////////////
    /// @brief Prints grid to the screen.  
    ///
    void displayGrid();

    ///////////////////////////////////////////////////////////////////////////
    /// @brief Returns value of the grid in the specified column and row 
    ///        indeces.
    /// @param _column Column index.
    /// @param _row Row index.
    /// @return Value at specified column and row.
    ///
    std::string getValue(int _column, int _row);

    ///////////////////////////////////////////////////////////////////////////
    /// @brief Takes in int to determine which player's turn it is and where on
    ///        the grid they would like to move.
    /// @param _count Determines whose turn it is.
    /// @param _currentMove Determines what position on the grid they move. 
    /// @return Updated count 
    ///
    int makeMove(int _count, std::string _currentMove);

    ///////////////////////////////////////////////////////////////////////////
    /// @brief Takes in column and row on the grid and and value to be at this
    ///        position to be set at this position.
    /// @param _column Column index of the move.
    /// @param _row Row index of the move.
    ///
    void setValue(int _column, int _row, std::string _value);
    
};

#endif