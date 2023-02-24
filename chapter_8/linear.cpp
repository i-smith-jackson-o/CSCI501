#include <iostream>
#include <vector>

int main() {
  std::vector<int> arr = {12, 15, 57, 24, 75, 24, 64, 13, 65, 43}; 
  bool found = false; 
  int position = -1; 
  int index = 0; 
  int searchValue = 99; 

  while (!found && index < arr.size()) {
    if (arr[index] == searchValue) {
      found = true; 
      position = index; 
    }
    index++; 
  }
  std::cout << position << std::endl; 
  return 0; 
}
