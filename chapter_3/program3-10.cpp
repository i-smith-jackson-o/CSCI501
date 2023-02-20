// This program uses a type cast expression to print a character 
// from a number 
#include <iostream>
using namespace std; 

void testVals() {
  int a = 5, b = 12; 
  double x = 3.4, z = 9.1; 

  cout << b/a << endl; 
  cout << x * a << endl; ; 
  cout << static_cast<double>(b/a) << endl; 
  cout << static_cast<double>(b) / a << endl; 
  cout << b / static_cast<double>(a) << endl; 
  cout << static_cast<double>(b) / static_cast<double>(a)<< endl; 
  cout << b / static_cast<int>(x) << endl; 
  cout << static_cast<int>(x) * static_cast<int>(z)<< endl; 
  cout << static_cast<int>(x*z)<< endl; 
  cout << static_cast<double>(static_cast<int>(x) * static_cast<int>(z))<< endl; 

}

int main() {
  int number = 65; 
  cout << number << endl; 
  cout << static_cast<char>(number) << endl; 

  testVals(); 

  return 0; 
}
