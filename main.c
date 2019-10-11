#include <stdio.h>


int main(){

    int (* arrPtr)[10] = NULL;
    int matrix[3][10] = {0};            // 3行，10列的数组

    // 数组名称是一个指向第一个元素的指针，也就是第一行的指针
    arrPtr = matrix;            // 使得arrPtr指向矩阵的第一行
    (*arrPtr)[0] = 5;           // 将5赋值给第一行的第一个元素
    arrPtr[2][9] = 6;           // 将6赋值给最后一行的最后一个元素
    ++arrPtr;                   // 将指针移动到下一行
    (*arrPtr)[0] = 7;           // 将7赋值给第二行的第一个元素

    for(int i=0; i<3; ++i) {
        for (int j = 0; j < 10; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}