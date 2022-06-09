//Description : Write a C program to concatenate two strings using pointers.

#include <stdio.h>

void str_cat(char *str1,char *str2)
{
    while(*++str1);
    while(*str2)
    {
        *str1++ = *str2++;
    }
    *str1 = '\0';
}

int main()
{
    char str1[] = "hello";
    char str2[] = "hello";
    str_cat(str1,str2);
    printf("%s",str1);
}