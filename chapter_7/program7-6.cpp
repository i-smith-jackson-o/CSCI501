// This program displays the number of days in each month. 
#include <iostream>
#include <string>
using namespace std; 

int main(){ 
  const int MONTHS = 12; 
  int days[MONTHS] = {  31, 28, 31, 30, 
			31, 30, 31, 30, 
			30, 31, 30, 31 }; 
  string months[MONTHS] = { "January", "February", "March", "April", 
			    "May", "June", "July", "August", 
			    "Septempber", "October", "November", "December" }; 

  for (int count = 0; count < MONTHS; count++) {
    cout << (count + 1) << ": "<< months[count] << " has "; 
    cout << days[count] << " days.\n"; 
  }
  return 0; 
}
