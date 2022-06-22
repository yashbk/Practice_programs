//Description : Write a C program to set nth bit of a number.

#include <stdio.h>
#define BYTE 8

void set_nth_bit(int* num,unsigned char position)
{
    *num = (*num | 1<<position);
}

int main()
{
    int num=0,position=0;
    printf("Enter the number and position to set the bit: ");
    scanf("%d%d",&num,&position);
    set_nth_bit(&num,position);
    printf("Number value after setting bit is %d: \n",num);
}