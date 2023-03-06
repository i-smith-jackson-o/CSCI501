// This program demonstrates the strcmp and atoi functions
#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>
using namespace std; 

int main() {
  const int SIZE = 20; 
  char input[SIZE]; 
  int total = 0; 
  int count = 0; 
  double average; 

  // Get the first number
  cout << "This program will average a series of number.\n"; 
  cout << "Enter the first number of Q to quit: "; 
  cin.getline(input, SIZE); 

  // Process the number and subsequent numbers
  while (tolower(input[0]) != 'q') {
    total += atoi(input); 
    count++; 
    // Get the next number. 
    cout << "Enter the next number or Q to quit: "; 
    cin.getline(input, SIZE); 
  }

  // If any numbers were entered, display their average. 
  if (count != 0) {
    average = static_cast<double>(total) / count; 
    cout << "Average: " << average << endl; 
  }
  return 0; 
}
