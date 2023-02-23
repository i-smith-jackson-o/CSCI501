#include <iostream>

int main() {
  const int NUM_LETTERS = 10; 
  char letters [NUM_LETTERS] = {'A', 'B', 'C', 'D', 'E', 
				'F', 'G', 'H', 'I', 'J'};
  for (int i = 0; i < NUM_LETTERS; i++) {
    std::cout << static_cast<int>(letters[i]) << std::endl; 
  }
  return 0; 
}
