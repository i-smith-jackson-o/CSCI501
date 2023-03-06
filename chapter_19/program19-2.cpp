// This programe demonstrates a simple recurisive function. 
#include <iostream>
using namespace std; 

// Function prototype
void message(int); 

int main() {
  message(5); 
  return 0; 
}

void message(int times) {
  cout << "Message called with " << times << " in times.\n"; 

  if (times > 0) {
    cout << "This is a recursive function "; 
    message(times-1); 
  }

  cout << "message returning with " << times; 
  cout << "  in times.\n"; 
}
