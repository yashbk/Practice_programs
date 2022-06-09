//Description : Write a C program to get highest set bit of a number.

#include <stdio.h>
#define BYTE 8

int highest_set_bit(int num)
{
    int i=31;
    while(i>=0)
    {
        if(num>>i & 1 == 1)
        {
            return i;
        }
        i--;
    }
}

int main()
{
    int num=0,position=0;
    printf("Enter the number to get it's highest set bit: ");
    scanf("%d",&num);
    printf("The highest set bit is %d: \n",highest_set_bit(num));
}