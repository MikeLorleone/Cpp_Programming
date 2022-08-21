#include<iostream>

using namespace std;

void shellSort(vector<int> & nums) {
  int n = nums.size();
  int h = 1;
  while(h < n/3) h = h*3 + 1;
  while ( h >= 1 ){
    for ( int i = h; i < n; i++ ){
      for ( int j = i; j >= h && nums[j] < nums[j - h]; j -= h ) {
        int temp = nums[j];
        nums[j] = nums[j - h];
        nums[j - h] = temp;
      }
    }
    h = h/3;
  }
}
