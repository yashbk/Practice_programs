//Description : Write a C program to get nth bit of a number.

#include <stdio.h>
#define BYTE 8

int get_nth_bit(int num,unsigned char position)
{
    return (num>>position & 1);
}

int main()
{
    int num=0,position=0;
    printf("Enter the number and position to know the bit value: ");
    scanf("%d%d",&num,&position);
    printf("Bit at position %d is %d",position,get_nth_bit(num,position));
}