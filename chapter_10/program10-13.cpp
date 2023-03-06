// This program uses the function nameSlice to cut the last 
// name off of a string that contains the users first and 
// last names. 
#include <iostream>
using namespace std; 

void nameSlice(char []); 

int main() {
  const int SIZE = 41; 
  char name[SIZE]; 

  cout << "Enter your first and last names, separated "; 
  cout << "by a space:\n"; 
  cin.getline(name, SIZE); 
  nameSlice(name); 
  cout << "Your first name is: " << name << endl; 
  return 0; 
}

void nameSlice(char userName[]) {
  int count = 0; 

  // Locate the first space, or the null terminator if there 
  // are no spaces. 
  while (userName[count] != ' ' && userName[count] != '\0')
    count++; 

  // If a space was found, replace it with a null terminator. 
  if (userName[count] == ' ')
    userName[count] = '\0'; 
}
