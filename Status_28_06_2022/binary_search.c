#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

typedef struct
{
    int arr[20];
    int key;
    int index;
} arr;


void *linear(void *ptr)
{
    for (int i = 0; i < sizeof(((arr *)ptr)->arr) / sizeof(int); i++)
    {
        if (((arr *)ptr)->key == ((arr *)ptr)->arr[i])
        {
            ((arr *)ptr)->index = i;
        }
    }
    return NULL;
}

void *binary(void *ptr)
{
    arr *stru = (arr *)ptr;
    int *low = stru->arr;
    int len = sizeof(stru->arr) / sizeof(int);
    int *high = stru->arr + len - 1;
    int mid = len / 2;
    int i = 0, j = len - 1;
    while (i <= j)
    {
        if (stru->key == stru->arr[mid])
        {
            stru->index = mid;
            return NULL;
        }
        else if (stru->key > stru->arr[mid])
        {
            i = mid + 1;
        }
        else if (stru->key < stru->arr[mid])
        {
            j = mid - 1;
        }
        mid = (i+j) / 2;
    }
    stru->index = -1;
}

int main()
{
    arr array;
    array.index = 0;
    for (int i = 0; i < 20; i++)
    {
        array.arr[i] = i;
    }
    pthread_t bin, lin;
    // array.key = 4;
    // pthread_create(&lin, NULL, linear, array.arr);
    // printf("Value %d found at index %d using linear search\n", array.key, array.index);
    
    array.key = 4;
    pthread_create(&bin, NULL, binary, array.arr);
    pthread_join(bin,NULL);
    printf("Value %d found at index %d using binary search\n", array.key, array.index);
}