//Description : Write a C program to find reverse of a string using pointers.
#include <stdio.h>

void str_rev(char *start)
{
    char temp;
    char *end = start;
    while(*++end);
    end--;
    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++; end--;
    }
}
int main()
{
    char str[40];
    printf("Enter the string\n");
    scanf("%[^\n]s",str);
    str_rev(str);
    printf("The string is %s ",str);
}