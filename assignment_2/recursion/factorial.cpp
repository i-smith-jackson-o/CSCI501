#include <iostream> 

int factorial(int i ) {
  if (i < 2)
    return 1; 
  else 
    return i * factorial(i - 1); 
}

int main() {
  std::cout <<  factorial(15) << std::endl; 
  return 0; 
}
