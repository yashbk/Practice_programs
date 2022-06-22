//Description : Write a C program to create, initialize and use pointers.

#include <stdio.h>

int main()
{
    int num = 20;
    int *ptr = &num;
    printf("Dereferencing a pointer: %d\n",*ptr);
}