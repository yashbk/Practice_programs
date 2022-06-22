//Description : Write a C program to sort array using pointers.

#include <stdio.h>

void sort(int *ptr,int len)
{
    int temp=0,flag = 0;
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<len-i-1;j++)
        {
            if(*(ptr+j) > *(ptr+j+1))
            {
                temp = *(ptr+j);
                *(ptr+j) = *(ptr+j+1);
                *(ptr+j+1) = temp;
                flag = 1;
            }
            if(flag == 0)
            {
                break;
            }
        }
    }
}

void print(int *arr,int len)
{
    for(int i=0;i<len;i++)
    {
        printf("%d ",*(arr+i));
    }
}

int main()
{
    int arr[] = {5,4,3,2,1,8,7,4,6,4};
    sort(arr,sizeof(arr)/sizeof(int));
    print(arr,sizeof(arr)/sizeof(int));
}