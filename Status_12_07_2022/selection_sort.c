// Selection sort
#include <stdio.h>

void print(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

void selection_sort(int *arr, int len)
{
    int min = 0, j = 0;
    int temp = 0;
    for (int i = 0; i < len; i++)
    {
        min = i;
        for (j = i + 1; j < len; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        if (min != i)
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}

int main()
{
    int arr[] = {5,7,2,4,7,8,3,1,6,8};
    int len = sizeof(arr) / sizeof(int);
    printf("Before sorting: ");
    print(arr, len);
    selection_sort(arr, len);
    printf("After sorting: ");
    print(arr, len);
}