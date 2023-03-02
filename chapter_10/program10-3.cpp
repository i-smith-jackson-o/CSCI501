// This program calculates the area of a circle. It asks the user 
// if he or she wishes to continue. A loop that demonstrates the 
// toupper function repeats until the user enters 'y' 'Y' 'n' or 'N'
#include <ios>
#include <iostream>
#include <cctype>
#include <iomanip>

int main() {
  const double PI = 3.14159; 
  double radius; 
  char goAgain; 

  std::cout << "This program calculates the area of a circle.\n"; 
  std::cout << std::fixed << std::setprecision(2); 

  do {
    std::cout << "Enter the circle's radius: "; 
    std::cin >> radius; 
    std::cout << "The area is " << (PI * radius * radius); 
    std::cout << std::endl; 

    std::cout << "Calculate another? (Y OR N) "; 
    std::cin >> goAgain; 

    while (toupper(goAgain) != 'Y' && toupper(goAgain) != 'N') {
      std::cout << "Please enter Y or N: "; 
      std::cin >> goAgain; 
    }
  } while (toupper(goAgain) == 'Y'); 
  return 0; 
}
