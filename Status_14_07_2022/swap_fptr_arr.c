#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

void normal_swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void xor_swap(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

void *print(void *ptr)
{
    int *num = ptr;
    printf("num1 = %d and num2 = %d\n", *num, *(num + 1));
}

int main()
{
    pthread_t tid;
    int *num1 = malloc(sizeof(int) * 2);
    int *num2 = num1 + 1;
    *num1 = 20;
    *num2 = 50;
    printf("Before swapping\n");
    pthread_create(&tid, NULL, print, num1);
    pthread_join(tid, NULL);
    void (*fptr[2])(int*, int*) = {normal_swap, xor_swap};
    fptr[0](num1, num2); // Swap using temp

    printf("After swapping using temp_swap\n");
    pthread_create(&tid, NULL, print, num1);
    pthread_join(tid, NULL);
    fptr[1](num1, num2); // Swap using xor
    printf("After swapping using xor_swap\n");
    pthread_create(&tid, NULL, print, num1);
    pthread_join(tid, NULL);
}