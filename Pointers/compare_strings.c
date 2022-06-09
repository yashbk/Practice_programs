//Description : Write a C program to compare two strings using pointers

#include <stdio.h>

int str_cmp(char *str1,char *str2)
{
    while(*str1 != '\0')
    {
        if(*str1 != *str2)
        {
            return *str1-*str2;
        }
        str1++,str2++;
    }
    return *str1-*str2;

}
int main()
{
    char *str1 = "helloa";
    char *str2 = "hello";
    printf("%d",str_cmp(str1,str2));
}