//Description : Write a C program to access two dimensional array using pointers

#include <stdio.h>
#include <stdlib.h>

void print1(int row,int col,int (*ptr)[col])
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",*(*(ptr+i)+j));
        }
        printf("\n");
    }
    putchar('\n');
}

void print2(int row,int col,int ptr[][col])
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",*(*(ptr+i)+j));
        }
        printf("\n");
    }
    putchar('\n');
}

void print3(int row,int col,int (*ptr)[col])
{
    int **new = malloc(sizeof(int*)*row);
    for(int i=0;i<row;i++)
    {
        *(new+i) = malloc(sizeof(int)*col);
    }


    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            *(*(new+i)+j) = *(ptr[i]+j);
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",*(*(new+i)+j));
        }
        putchar('\n');
    }
    putchar('\n');
}

int main()
{
    int arr[][2] = {1,2,3,4};
    print1(2,2,arr);
    print2(2,2,arr);
    print3(2,2,arr);
}