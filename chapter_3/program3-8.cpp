// This program can be used to see how your system handles 
// floating point overflow and underflow. 
#include <iostream>
using namespace std; 

int main() {
  float test; 

  test = 2.0e38 * 1000; 
  cout << test << endl;  

  test = 2.0e-38 / 2.0e38;
  cout << test << endl; 
}
