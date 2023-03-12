#include <iostream>
#include <vector>
using std::vector; 

// Function prototype
void insertionSort(vector<int>& vec); 
int binarySearch(vector<int>, int); 

int main() {
  vector<int> lotteryNums = {13579, 26791, 26792, 33445, 55555, 
			     62483, 77777, 79422, 85647, 93121}; 
  int winningNum; 
  insertionSort(lotteryNums); 
  std::cout << "Enter this weeks winning number nnnnn: "; 
  std::cin >> winningNum; 

  int test = binarySearch(lotteryNums, winningNum);

  if (binarySearch(lotteryNums, winningNum) >= 0) {
    std::cout << "You win!" << std::endl; 
  } else {
    std::cout << "No dice." << std::endl; 
  }
  return 0; 
}

void insertionSort(vector<int>& vec) {
  for (int i = 0; i < vec.size(); i++) {
    int key = vec[i]; 
    int j = i - 1; 
    while (j >= 0 && vec[j] > key) {
      vec[j+1] = vec[j]; 
      j = j-1; 
      vec[j + 1] = key; 
    }
  }
}

int binarySearch(vector<int> vec, int value) {
  int first = 0, 
      last = vec.size() - 1, 
      middle, 
      position = -1; 
  bool found = false; 

  while (!found && first <= last) {
    middle = (first + last) / 2; 
    if (vec[middle] == value) {
      found = true; 
      position = middle; 
    } else if (vec[middle] > value) 
      last = middle - 1; 
    else 
      first = middle + 1; 
  }
  return position; 
}
