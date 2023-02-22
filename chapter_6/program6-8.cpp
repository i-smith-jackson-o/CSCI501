// this program 
#include <iostream>
using namespace std; 

void showSum(int num1, int num2, int num3) {
  cout << (num1 + num2 + num3) << endl;  
}

int main() {
  int value1, value2, value3; 

  cin >> value1 >> value2 >> value3; 

  showSum(value1, value2, value3); 
  return 0; 
}
