// This program unsafely accesses an area of memory by writing 
// values beyond an arrays boundary. 
// WARNING: If you compile and run this program, it could crash. 
#include <iostream>
using namespace std; 

int main() {
  const int SIZE = 3; 
  int values[SIZE];
  int count; 

  // Attempt to store five numbers in the three-element array
  cout << "I will store 5 numbers in a three-element array!\n"; 
  for (count = 0; count < 5; count++)
    values[count] = 100; 

  cout << " " << endl; 
  // If the program is still running, display the numbers. 
  for (count = 0; count < 6; count++)
    cout << count << " " << values[count] << endl; 
  return 0; 
}
// aborts on my machine after running... not sure what it means. 
