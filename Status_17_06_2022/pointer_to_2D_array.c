#include <stdio.h>

void print_arr(int row,int col,int (*ptr)[row])
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",*(*(ptr+i)+j));
        }
        putchar('\n');
    }
}

int main()
{
    int arr[][2] = {1,2,3,4};
    print_arr(2,2,arr);
}