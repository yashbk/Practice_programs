//Description : Write a C program to multiply two matrix using pointers.

#include <stdio.h>

void print_arr(int row,int col,int arr[row][col])
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",arr[i][j]);
        }
        putchar('\n');
    }
}

void add(int row,int col,int A[row][col],int B[row][col])
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            A[i][j] += B[i][j];
        }
    }
}

void mul(int row,int col,int A[row][col],int B[row][col])
{
    int temp[row][col];

    for(int i=0;i<row;i++)
    {
        
    }
}

int main()
{
    int arr1[2][2] = {1,2,3,4};
    int arr2[2][2] = {4,3,2,1};
    add(2,2,arr1,arr2);
    print_arr(2,2,arr1);
}