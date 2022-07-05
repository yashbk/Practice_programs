#include <stdio.h>

void bubble(int *arr, int len)
{
    int temp = 0;
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void insertion(int *arr, int len)
{
    int j = 0;
    int key;
    for (int i = 0; i < len - 1; i++)
    {
        key = arr[i + 1];
        j = i;
        while (arr[j] > key && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[++j] = key;
    }
}

void selection(int *arr, int len)
{
    int min = 0;
    for (int i = 0; i < len-1; i++)
    {
        min = i;
        for (int j = i+1; j < len; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        if (min != i)
        {
            arr[min] = arr[min] ^ arr[i];
            arr[i] = arr[min] ^ arr[i];
            arr[min] = arr[min] ^ arr[i];
        }
    }
}

void print(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", *(arr + i));
    }
    putchar('\n');
}

int main()
{
    int arr[] = {4, 3, 2, 1};
    int len = sizeof(arr) / sizeof(int);
    // bubble(arr,len);
    // insertion(arr,len);
    selection(arr, len);
    print(arr, len);
}