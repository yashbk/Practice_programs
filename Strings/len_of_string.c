#include <stdio.h>

int main()
{
    int i=0;
    char str[40];
    printf("Enter the string to know it's length: ");
    scanf("%[^\n]s",str);
    while(*(str+i++)!= '\0');
    printf("Length of string is %d\n",i-1);
}