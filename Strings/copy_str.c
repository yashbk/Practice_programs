#include <stdio.h>

void cpy_str(char *dest,const char *src)
{
    while(*src != '\0')
    {
        *dest++ = *src++;
    }
    *dest = '\0';
}

int main()
{
    char *str1 = "hello world";
    char str2[30];
    cpy_str(str2,str1);
    printf("str2 value is %s\n",str2);
}