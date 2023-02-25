// Demetris Leadership Center(DLC) product look up program. 
// This program allows the user to enter a product number
// and then displays the title, description, and price of 
// that product
#include <iostream>
#include <string>
using std::string; 

const int NUM_PRODS = 9; 
const int MIN_PRODNUM = 914; 
const int MAX_PRODNUM = 922; 

// Function prototypes
int getProdNum(); 
int binarySearch(const int[], int, int); 
void displayProd(const string[], const string[], const double[], int); 

int main() {
  int id[NUM_PRODS] = {914, 915, 916, 917, 918, 919, 920, 
		       921, 922}; 

  string title[NUM_PRODS] = 
      { "Six Steps to Leadership", 
        "Six Steps to Leadership", 
        "The Road to Excellence", 
        "Seven Lessons of Quality", 
        "Seven Lessons of Quality", 
        "Seven Lessons of Quality", 
        "Teams Are Made, Not Born", 
        "Leadership for the Future", 
        "Leadership for the Future"
      };

  string description[NUM_PRODS] = 
      {	"Book", "Audio CD", "DVD", 
	"Book", "Audio CD", "DVD", 
	"Book", "Book", "Audio CD"
      }; 

  double prices[NUM_PRODS] = {12.95, 14.95, 18.95, 16.95, 21.95, 
			      31.95, 14.95, 14.95, 16.95}; 

  int prodNum; 
  int index; 
  char again; 

  do {
    prodNum = getProdNum(); 
    index = binarySearch(id, NUM_PRODS, prodNum); 

    if (index == -1)
      std::cout << "That product number was not found.\n"; 
    else
     displayProd(title, description, prices, index);

    std::cout << "Would you like to look up another product? (y/n) "; 
    std::cin >> again; 
  } while (again == 'y' || again == 'Y'); 

  return 0; 
}

int getProdNum() {
  int prodNum; 

  std::cout << "Enter the item's product number: "; 
  std::cin >> prodNum; 

  if (prodNum < MIN_PRODNUM || prodNum > MAX_PRODNUM) {
    std::cout << "Enter a number in the range of " << MIN_PRODNUM; 
    std::cout << " through " << MAX_PRODNUM << ".\n"; 
  }
  return prodNum; 
}

int binarySearch(const int array[], int numElems, int value) {
  int first = 0,
      last =  numElems - 1, 
      middle, 
      position = -1; 
  bool found = false; 

  while (!found && first <= last) {
    middle = (first + last) / 2; 
    if (array[middle] == value) {
      found = true; 
      position = middle; 
    }
    else if (array[middle] > value)
      last = middle - 1; 
    else 
      first = middle + 1; 
  }
  return position; 
}

void displayProd(const string title[], const string desc[], 
		 const double price[], int index) {
  std::cout << "Title: " << title[index] << std::endl; 
  std::cout << "Description: " << desc[index] << std::endl; 
  std::cout << "Price $" << price[index] << std::endl; 
}





