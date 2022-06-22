#include <stdio.h>

void str_cat(char *front,const char *back)
{
    while(*++front);
    int i=0;
    while(*back != '\0')
    {
        *front++ = *back++;
    }
    *front = '\0';
}

int main()
{
    char *str1 = "day";
    char str2[] = "fabulous ";
    str_cat(str2,str1);
    printf("str2 value is %s\n",str2);
}