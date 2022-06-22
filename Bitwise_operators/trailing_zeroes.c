//Description : Write a C program to count trailing zeros in a binary number.

#include <stdio.h>
#define BYTE 8

int lowest_set_bit(int num)
{
    int i=0;
    while(i<31)
    {
        if(num>>i & 1 == 1)
        {
            return i;
        }
        i++;
    }
}

int main()
{
    int num=0,position=0;
    printf("Enter the number to get it's lowest set bit: ");
    scanf("%d",&num);
    printf("The lowest set bit is %d: \n",lowest_set_bit(num));
}