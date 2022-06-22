//Description : Write a C program to find length of string using pointers.

#include <stdio.h>

int str_len(char *ptr)
{
    char *new = ptr;
    while(*++new);
    return new-ptr;
}

int main()
{
    char str2[] = "hello";
    printf("%d",str_len(str2));
}