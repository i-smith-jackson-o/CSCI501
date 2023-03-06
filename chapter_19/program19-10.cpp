// This program displays a solution to the Towers of 
// Hanoi game. 
#include <iostream>
using namespace std; 

void moveDiscs(int, int, int, int, int); 

int main() {
  int count = 0; 
  const int NUM_DISCS = 10; 
  const int FROM_PEG = 1; 
  const int TO_PEG = 3; 
  const int TEMP_PEG = 2; 

  // Play the game. 
  moveDiscs(NUM_DISCS, FROM_PEG, TO_PEG, TEMP_PEG, count); 
  cout << "All the pegs are moved!\n"; 
  cout << (count * 2) + 1 << endl; 
}

void moveDiscs(int num, int fromPeg, int toPeg, int tempPeg, int count) {
  if (num > 0) {
  count++;
    moveDiscs(num - 1, fromPeg, tempPeg, toPeg, count); 
    cout << count << " " << "Move a disc from peg " << fromPeg 
	 << " to peg " << toPeg << endl; 
    moveDiscs(num - 1, tempPeg, toPeg, fromPeg, count); 
  }
}
