//Description : Write a C program to check Least Significant Bit (LSB) of a number is set or not.

#include <stdio.h>

void is_lsb_set(int num)
{
    if(num & 1 == 1)
    {
        printf("LSB is set\n");
    }
    else
    {
        printf("LSB is not set\n");
    }
}

int main()
{
    is_lsb_set(2);
}