// This program tests a customer number to determine whether 
// it is in the proper format
#include <iostream>
#include <cctype>

// function prototype 
bool testNum(char [], int); 

int main() {
  const int SIZE = 8; 
  char customer[SIZE]; 

  std::cout << "Enter a customer number in the form "; 
  std::cout << "LLLNNNN\n"; 
  std::cout << "(LLL = letters and NNNN = Numbers): "; 
  std::cin.getline(customer, SIZE); 

  if (testNum(customer, SIZE))
    std::cout << "That's a valid customer number.\n"; 
  else {
    std::cout << "That is not the proper format of the "; 
    std::cout << "customer number.\nHere is an example:\n"; 
    std::cout << "    ABC1234\n"; 
  }
  return 0; 
}

bool testNum(char custNum[], int size) {
  int count; 
  for (count = 0; count < 3; count++) {
    if (!isalpha(custNum[count]))
      return false; 
  }
  for (count = 3; count < size - 1; count++) {
    if (!isdigit(custNum[count]))
      return false; 
  }
  return true; 
}


