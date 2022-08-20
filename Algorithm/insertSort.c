#include <iostream>

using name space;

void insertSort(vector<int>& nums) {
  int n = nums.size();
  for ( int i = 0; i < n; i++ ) {
    for ( int j = i; j > 0 && nums[j] < nums[i]; j-- ) {
      int temp = nums[j];
      nums[j] = nums[i];
      nums[i] = temp;
    }
  }
}
