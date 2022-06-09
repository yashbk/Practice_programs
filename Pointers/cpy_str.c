//Description : Write a C program to copy one string to another using pointers.

#include <stdio.h>

void str_cat(char *dest,char *src)
{
    while(*src)
    {
        *dest++ = *src++;
    }
    *dest = '\0';
}

int main()
{
    char str1[20];
    char str2[] = "hello";
    str_cat(str1,str2);
    printf("%s",str1);
}