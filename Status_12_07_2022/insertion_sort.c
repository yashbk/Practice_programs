//Insertion sort
#include <stdio.h>

void insertion_sort(int *arr,int len)
{
    int key = 0,j=0;
    for(int i=1;i<len;i++)
    {
        key = arr[i];
        for(j=i-1;j>=0 && arr[j] > key ;j--)
        {
            arr[j+1] = arr[j];
        }
        arr[j+1] = key;
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
    int arr[] = {6,5,8,3,1,0,4,3,7};
    int len = sizeof(arr)/sizeof(int);
    printf("Before sorting: ");
    print(arr,len);
    insertion_sort(arr,len);
    printf("\nAfter sorting: ");
    print(arr,len);
}