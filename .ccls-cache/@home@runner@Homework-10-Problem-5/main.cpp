#include <iostream>

using namespace std; 


const int ROWS = 2;
const int COLS = 3;
void arr(int [][COLS]);
int main() {
  int nums[ROWS][COLS] = {  {33, 16, 29}, 
                            {54, 67, 99}  };


  arr(nums);

  cout << "\nNo the notation val[1][2] is not valid in the arr function.";
  

}

void arr(int (*val) [3]){
  cout << endl << *(*val);
  cout << endl << *(*val+1);
  cout << endl << *(*(val+1)+2);
  cout << endl << *(*val) + 1;

  return; 
}