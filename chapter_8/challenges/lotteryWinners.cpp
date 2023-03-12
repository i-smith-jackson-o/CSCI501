// A lottery ticket buyer purchases 10 tickets a week, 
// always playing the same 10 5-digit “lucky” combinations. 
// Write a program that initializes an array or a vector 
// with these numbers and then lets the player enter 
// this week’s winning 5-digit number. The program 
// should perform a linear search through the 
// list of the player’s numbers and report whether or 
// not one of the tickets is a winner this week. Here are the numbers:
// 13579 26791 26792 33445 55555 62483 77777 79422 85647 93121

#include <iostream>
#include <vector>
using std::vector; 

// Function prototype
bool searchVec(vector<int>, int); 


int main() {
  vector<int> lotteryNums = {13579, 26791, 26792, 33445, 55555, 
			     62483, 77777, 79422, 85647, 93121}; 
  int winningNum; 
  std::cout << "Enter this weeks winning number nnnnn: "; 
  std::cin >> winningNum; 

  if (searchVec(lotteryNums, winningNum)) {
    std::cout << "You win!" << std::endl; 
  } else {
    std::cout << "No dice." << std::endl; 
  }
  return 0; 
}

bool searchVec(vector<int> nums, int winningNum) {
  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] == winningNum)
      return true; 
  }
  return false; 
}
