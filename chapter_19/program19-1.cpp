// This program demonstrates a simple recursive function 
#include <iostream>
using namespace std; 

void message(int); 

int main() {
  message(5); 
  return 0;
}

void message(int times) {
  if (times > 0) {
    cout << "This is a recursive function.\n"; 
    message(times-1); 
  }
}
