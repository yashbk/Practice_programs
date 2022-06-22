#include <stdio.h>
#include <pthread.h>

typedef struct something
{
    int **arr;
    int row,col;
}arr;

void *print2D_array(void *arr)
{

}

int main()
{
    pthread_t one;
    arr new;
    new.row = 5;
    new.col = 5;
    new.arr = malloc(sizeof(int *)*new.row);
    

    pthread_create(&one,NULL,print2D_array,&new)

}