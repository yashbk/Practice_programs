#include <stdio.h>

int str_cmp(char *str1, char *str2)
{
    while (*str1 != '\0')
    {
        if (*str1 != *str2)
        {
            return *str1 - *str2;
        }
        str1++, str2++;
    }
    return *str1 - *str2;
}
int main()
{
    char *str1 = "helloa";
    char *str2 = "hello";
    if(str_cmp(str1,str2))
    {
        printf("Strings are not equal\n");
    }
    else
    {
        printf("Stings are equal\n");
    }
}