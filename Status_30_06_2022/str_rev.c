#include <stdio.h>

int str_len(char *str)
{
    char *start = str;
    while(*++str);
    return str - start;
}

void str_rev(char *str)
{
    char *new = str;
    int len = str_len(str);
    char temp;
    char *end = str + len-1;
    while(str < end)
    {
        temp = *str;
        *str = *end;
        *end = temp;
        str++;end--;
    }
}

int main()
{
    char str[] = "hello world";
    str_rev(str);
    printf("%s\n",str);
}