#include <iostream>
#include <string>

int main() {
  const int SIZE = 9; 
  std::string planets[SIZE] = { "Mercury", "Venus", "Earth", "Mars", 
			   "Jupiter", "Saturn", "Uranus", 
			   "Neptune", "Pluto (A Dwarf Planet)" }; 

  std::cout << "Here are the planets: \n"; 
  for (int count = 0; count < SIZE; count++)
    std::cout << planets[count] << std::endl; 
  return 0; 
}
