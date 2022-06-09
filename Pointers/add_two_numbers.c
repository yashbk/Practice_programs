//Description : Write a C program to add two numbers using pointers.

#include <stdio.h>

int main()
{
    int num1 = 20,num2 = 30;
    int *ptr1 = &num1,*ptr2 = &num2;
    printf("Sum is : %d\n",*ptr1 + *ptr2);
}