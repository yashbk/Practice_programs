//Description : Write a C program to check Most Significant Bit (MSB) of a number is set or not.

#include <stdio.h>
#define BYTE 8

void is_msb_set(int num)
{
    if(num>>((sizeof(num)*BYTE)-1) & 1 == 1)
    {
        printf("MSB is set\n");
    }
    else
    {
        printf("MSB is not set\n");
    }
}

int main()
{
    is_msb_set(-1);
}