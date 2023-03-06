// This program uses the strstr function to search an array. 
#include <iostream>
#include <cstring>
using namespace std; 

int main() {
  // Constants for array lengths
  const int NUM_PRODS = 5; 
  const int LENGTH = 27; 

  // Array of products
  char products[NUM_PRODS][LENGTH] = 
		  {
		    "TV327 31-inch Television", 
		    "CD257 CD Player", 
		    "TA677 Answering Machine", 
		    "CS109 Car Stereo", 
		    "PC955 Personal Computer"
		  }; 
  char lookUp[LENGTH]; 
  char *strPtr = nullptr; 
  int index; 

  // Prompt the user for a product number
  cout << "\tProduct Database\n\n"; 
  cout << "Enter a product number to search for: "; 
  cin.getline(lookUp, LENGTH); 

  // Search the array for a matching substring 
  for (index = 0; index < NUM_PRODS; index++) {
    strPtr = strstr(products[index], lookUp); 
    if (strPtr != nullptr)
      break; 
  }

  if (strPtr != nullptr)
    cout << products[index] << endl; 
  else
   cout << "No matching product was found.\n";

  return 0; 
}
