//Description : Write a C program to clear nth bit of a number.

#include <stdio.h>
#define BYTE 8

void clear_nth_bit(int* num,unsigned char position)
{
    *num =(*num & ~(1<<position));
}

int main()
{
    int num=0,position=0;
    printf("Enter the number and position to clear the bit: ");
    scanf("%d%d",&num,&position);
    clear_nth_bit(&num,position);
    printf("Number value after clearing bit is %d: \n",num);
}