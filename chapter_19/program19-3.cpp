// This program demonstrates a recursive function to 
// calculate the factorial of a number. 
#include <iostream>
using namespace std; 

int factorial(int); 

int main() {
  int number; 

  // Get a number from the user. 
  cout << "Enter an integer value and I will display\n"; 
  cout << "is factorial: "; 
  cin >> number; 

  // Display the factorial of the number. 
  cout << "The factorial of " << number << " is "; 
  cout << factorial(number) << endl; 
  return 0; 
}

int factorial(int n) {
  if (n == 0)
    return 1; 
  else 
    return n * factorial(n - 1); 
}
