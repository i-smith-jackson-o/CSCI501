// This program asks the user to enter the length and width 
// of a rectangle. it calculates the rectangle's area and displays
// the value on the screen. 
#include <iostream>
using namespace std; 

int main() {
  int length, width, area; 
  cout << "Calculating the area of a rectangle.\n"; 

  cout << "Enter length: "; 
  cin >> length; 

  cout << "Enter width: "; 
  cin >> width; 
  area = length * width; 

  cout << "The area of the rectangle is " << area << ".\n"; 

  return 0; 
}
