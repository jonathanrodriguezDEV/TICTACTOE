///////////////////////////////////////////////////////////////////////////////
/// @author Jonathan Rodriguez
/// @date 26 February 2019
/// @brief File contains implementation for Grid.h.
///
///////////////////////////////////////////////////////////////////////////////

#include "Grid.h"

#include <iostream>

///////////////////////////////////////////////////////////////////////////
/// @brief Default Constructor
///
Grid::Grid() {
	int x = 1;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      m_grid[i][j] = '0' + x;
      x++;
    }
  }
}

///////////////////////////////////////////////////////////////////////////
/// @brief Prints grid to the screen.  
///
void Grid::displayGrid() {
	for (int _column = 0; _column < 3; _column++) {
		for (int _row = 0; _row < 3; _row++) {
			std::cout << m_grid[_column][_row] << " ";
		}
		std::cout << std::endl;
	}
}

///////////////////////////////////////////////////////////////////////////
/// @brief Returns value of the grid in the specified column and row 
///        indeces.
/// @param _column Column index.
/// @param _row Row index.
/// @return Value at specified column and row.
///
std::string Grid::getValue(int _column, int _row) {
	return m_grid[_column][_row];
}

///////////////////////////////////////////////////////////////////////////
/// @brief Takes in int to determine which player's turn it is and where on
///        the grid they would like to move.
/// @param _count Determines whose turn it is.
/// @param _currentMove Determines what position on the grid they move. 
/// @return Updated count 
///
int Grid::makeMove(int _count, std::string _currentMove) {
	for (int _column = 0; _column < 3; _column++) {
		for (int _row = 0; _row < 3; _row++) {
			if (_currentMove == m_grid[_column][_row]) {
				if (_count % 2 == 0) {
					m_grid[_column][_row] = 'X';
					_count++;
					return _count;
				} else {
					m_grid[_column][_row] = 'O';
					_count++;
					return _count;
				}
			}
		}
	}
	std::cout << "That is not a valid move." << std::endl;
	return _count;
}

///////////////////////////////////////////////////////////////////////////
/// @brief Takes in column and row on the grid and and value to be at this
///        position to be set at this position.
/// @param _column Column index of the move.
/// @param _row Row index of the move.
///
void Grid::setValue(int _column, int _row, std::string _value) {
	m_grid[_column][_row] = _value;
}
