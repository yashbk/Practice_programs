#include <stdio.h>

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int *arr, int low, int high)
{
    int pivot = low;
    int p = low + 1, q = high;
    while (p <= q)
    {
        while (arr[pivot] > arr[p])
            p++;

        while (arr[pivot] < arr[q])
            q--;

        if (p < q)
        {
            swap(&arr[p], &arr[q]);
        }
    }
    swap(&arr[pivot], &arr[q]);
    return q;
}

void quick_sort(int *arr, int low, int high)
{
    if (low < high)
    {
        int pivot = partition(arr, low, high);
        partition(arr, low, pivot - 1);
        partition(arr, pivot + 1, high);
    }
}

void print(int *arr,int len)
{
    for(int i=0;i<len;i++)
    {
        printf("%d ",arr[i]);
    }
    putchar('\n');
}

int main()
{
    int arr[] = {1,4,3,2,4,5,6,7,3,2};
    int len = sizeof(arr)/sizeof(int);
    quick_sort(arr,0,len-1);
    print(arr,len);
}