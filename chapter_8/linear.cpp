#include <iostream>
#include <vector>
#include <fstream>

int main() {
  int temp; 
  std::ifstream inputFile; 
  std::vector<int> arr = {}; 
  bool found = false; 
  int position = -1; 
  int index = 0; 
  int searchValue = 6394; 

  inputFile.open("1kIntegers.txt"); 
  for (int i = 0; i < 1000; i++) {
    inputFile >> temp; 
    arr.push_back(temp); 
  }
  inputFile.close(); 

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
