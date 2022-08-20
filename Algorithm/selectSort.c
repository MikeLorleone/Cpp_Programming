#include <iostream>

using namespace std;

void selectSort(vetctor<int>& nums){
  int n = nums.size();
  for ( int i = 0; i < n; i++) {
    int m = i;
    for ( int j = i; j < n; j++ ) 
      if ( nums[j] < nums[m] ) m = j;
    int temp = a[i];
    a[i] = a[m];
    a[m] = temp;
  }
}
