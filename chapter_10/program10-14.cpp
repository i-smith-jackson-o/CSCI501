// This program demonstrates a function, countChars, that counts 
// the n umber of times a specific character appears in a string. 
#include <iostream>
using namespace std; 

int countChars(char *, char); 

int main() {
  const int SIZE = 51; 
  char userString[SIZE]; 
  char letter; 

  // Get a string from the user. 
  cout << "Enter a string (up to 50 characters): "; 
  cin.getline(userString, SIZE); 

  // Choose a character whose occurrences within the string will be counted. 
  cout << "Enter a character and I will tell you how many\n"; 
  cout << "times it appears in the string: "; 
  cin >> letter; 

  // Display the number of times the character appears. 
  cout << letter << " appears "; 
  cout << countChars(userString, letter) << " times.\n"; 
  return 0; 
}

int countChars(char *strPtr, char ch) {
  int times = 0; 

  // Step through the string counting occurrences of ch. 
  while (*strPtr != '\0') {
    if (*strPtr == ch)
      times++; 
    strPtr++; 
  }
  return times; 
}










