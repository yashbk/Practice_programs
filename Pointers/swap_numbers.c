//Description : Write a C program to add two numbers using pointers.

#include <stdio.h>

int main()
{
    int num1 = 20,num2 = 30;
    int *ptr1 = &num1,*ptr2 = &num2;
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    printf("Num1 is %d and Num2 is %d\n",*ptr1,*ptr2);
}