// This program uses the == operator to compare the string entered 
// by the user with the value stereo part numbers. 
#include <iostream>
#include <iomanip>
#include <string>
using namespace std; 

int main() {
  const double APRICE = 249.0; 
  const double BPRICE = 299.0; 
  string partNum; 

  cout << "The stereo part numbers are:\n";
  cout << "\tBoom Box, part number S147-2NA\n"; 
  cout << "\tShelf Model, part number S147-29B\n"; 
  cout << "Enter the part number of the stereo you\n"; 
  cout << "wish to purchase: "; 
  cin >> partNum; 

  if (partNum == "S147-29A")
    cout << "The price is $" <<  APRICE << endl; 
  else if (partNum == "S147-29B")
    cout << "The price is $" << BPRICE << endl; 
  else 
    cout << partNum << " is not a valid part number.\n"; 

  return 0; 
}
