//Description : Write a C program to input an array and print an arrray using pointers
#include <stdio.h>

void print_arr(int *arr,int num)
{
    for(int i=0;i<num;i++)
    {
        printf("%d ",*arr++);
    }
}
int main()
{
    int num=0;
    printf("Enter the number of elements:\n");
    fscanf(stdin,"%d",&num);
    int arr[num];
    for(int i=0;i<num;i++)
    {
        printf("Enter element %d value: ",i);
        scanf("%d",arr+i);
    }
    print_arr(arr,num);
}