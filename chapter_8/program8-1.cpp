#include <iostream>
#include <vector>

int searchList(const int[], int, int); 
int searchVector(const std::vector<int>& vec, int value); 
void printResult(int); 
const int SIZE = 5; 

int main() {
  int tests[SIZE] = {87, 75, 98, 100, 82}; 
  std::vector<int> vecTest{87, 75, 98, 82, 99, 100,}; 

  int listResult = searchList(tests, SIZE, 100); 
  int vecResult = searchVector(vecTest, 100); 

  printResult(listResult); 
  printResult(vecResult); 
  return 0; 
}

int searchVector(const std::vector<int>& vec, int value) {
  int index = 0; 
  int position = -1; 
  bool found = false; 

  while (index < vec.size() && !found) {
    if (vec[index] == value) {
      found = true; 
      position = index; 
    }
    index++; 
  }
  return position; 
}

int searchList(const int list[], int numElems, int value) {
  int index = 0; 
  int position = -1; 
  bool found = false; 

  while (index < numElems && !found) {
    if (list[index] == value) {
      found = true; 
      position = index; 
    }
    index++; 
  }
  return position; 
}

void printResult(int result) {
  if (result == -1)
    std::cout << "You didnt earn 100 points on any test.\n"; 
  else {
    std::cout << "You earned 100 points on test "; 
    std::cout << (result + 1) << "." << std::endl; 
  }
}
