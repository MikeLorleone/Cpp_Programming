/**************************
 *这是一个带标志的冒泡排序算法
 **************************/
#include<iostream>

//单趟冒泡函数
bool bubble (int A [], int n) {
    //设置标志位，若序列中没有逆序对，则说明序列已经有序
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
    //设置循环，每循环一次，未排序数组长度减一
    while (!bubble(A, n--));
    for ( int i = 0; i < m; i++ )
        std::cout << A[i] << " ";
    std::cout << std::endl;
}