// Range based for loop
#include <iostream>

int main() {
  int numbers[] = { 10, 20, 30, 40, 50 }; 

  for (int val : numbers)
    std::cout << val << std::endl; 
  return 0; 
}
