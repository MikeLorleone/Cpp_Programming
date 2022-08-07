/**************************
 *这是一个带标志的冒泡排序算法
 **************************/
#include<iostream>
bool bubble (int A [], int n) {
    bool sorted = true;
    for ( int i = 1; i < n; i++ ){
        if ( A[i - 1] > A[i] ) {
            sorted = false;
            int temp = A[i];
            A[i] = A[i -1];
            A[i - 1] = temp;
        }
    }
    return sorted;
}

int main () {
     int n = 10;
     int m = n;
    int A [n] = { 9, 7, 5, 3, 4, 2, 8, 0, 6, 1};
    while (!bubble(A, n--));
    for ( int i = 0; i < m; i++ )
        std::cout << A[i] << " ";
    std::cout << std::endl;
}