// This program demonstrates the range-based for loop. 
#include <iostream>
#include <string>
using namespace std; 

int main() {
  string planets[] = { "Mercury", "Venus", "Earth", "Mars", 
		       "Jupiter", "Saturn", "Uranus", 
		       "Neptune", "Pluto (A Dwarf Planet)" }; 

  cout << "Here are the planets:\n"; 

  // Display the values in the array.
  for (string val : planets)
    cout << val << endl; 

  return 0; 
}
