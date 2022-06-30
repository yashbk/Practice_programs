#include <stdio.h>

int str_cmp(char *one,char *two)
{
    while(*one)
    {
        if(*one != *two)
        {
            return *one -*two;
        }
        one++,two++;
    }
    return *one - *two;
}

int main()
{
    char str1[] = "hello world";
    char str2[] = "hello world";
    if(!str_cmp(str1,str2))
    {
        printf("Both are equal\n");
    }
    else
    {
        printf("Both are not equal\n");
    }
}