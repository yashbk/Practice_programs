// Description : Write a C program to multiply two matrix using pointers.

#include <stdio.h>

void print_arr(int row, int col, int arr[row][col])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        putchar('\n');
    }
}

void add(int row, int col, int A[row][col], int B[row][col])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            A[i][j] += B[i][j];
        }
    }
}

void mul(int row, int col, int A[row][col], int B[row][col])
{
    int temp[row][col];
    int sum = 0;
    int m = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            temp[i][j] = 0;
            for (int k = 0; k < col; k++)
            {
                temp[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            A[i][j] = temp[i][j];
        }
    }
}

int main()
{
    int arr1[2][2] = {2, 3, 4, 5};
    int arr2[2][2] = {1, 2, 3, 4};
    // add(2, 2, arr1, arr2);
    // print_arr(2, 2, arr1);
    mul(2, 2, arr1, arr2);
    print_arr(2, 2, arr1);
}
