// This program is a driver that tests a function comparing the 
// contents of two int arrays. 
#include <iostream>
using namespace std; 

// Function prototype
bool testPIN(const int[], const int[], int); 

int main() {
  const int NUM_DIGITS = 7; 
  int pin1[NUM_DIGITS] = {2, 4, 1, 8, 7, 9, 0}; 
  int pin2[NUM_DIGITS] = {2, 4, 6, 8, 7, 9, 0}; 

  int pin3[NUM_DIGITS] = {1, 2, 3, 4, 5, 6, 7}; 

  if (testPIN(pin1, pin2, NUM_DIGITS))
    cout << "ERROR: pin1 and pin2 report to be the same.\n"; 
  else 
    cout << "SUCCESS: pin1 and pin2 are different.\n"; 

  if (testPIN(pin1, pin3, NUM_DIGITS))
    cout << "ERROR: pin1 and pin3 report to be the same.\n"; 
  else 
    cout << "SUCCESS: pin1 and pin3 are different.\n"; 

  if (testPIN(pin1, pin1, NUM_DIGITS))
    cout << "SUCCESS: pin1 and pin1 report to be the same.\n"; 
  else 
    cout << "ERROR: pin1 and pin1 are different.\n"; 
  return 0; 
}

bool testPIN(const int custPIN[], const int databasePIN[], int size) {
  for (int index = 0; index < size; index++) {
    if (custPIN[index] != databasePIN[index])
      return false; 
  }
  return true; 
}



