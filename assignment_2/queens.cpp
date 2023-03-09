#include <iostream>
#include <iomanip>


int main() {
  int rows = 8; 
  int cols = 8; 
  int board[rows][cols]; 

  // Generate empty 8x8 array
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      board[i][j] = 0; 
    }
  }

  return 0; 
}
