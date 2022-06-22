//Description : Write a C program to search an element in array using pointers.

#include <stdio.h>

void search(int *arr,int len,int *element)
{
    int flag = 0;
    for(int i=0;i<len;i++)
    {
        if(*element == arr[i])
        {
            flag = printf("Element found at position: %d\n",i);
        }
    }
    if(flag == 0)
    {
        printf("Element not found\n");
    }
}

int main()
{
    int num[] = {1,2,3,4,5,6,7,8,9,10};
    int find = 3;
    search(num,sizeof(num)/sizeof(int),&find);
}