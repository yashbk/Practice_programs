#include <stdio.h>

void count(char *str)
{
    int vowels = 0, consonents = 0;
    while (*str)
    {
        switch (*str)
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            vowels++;
            break;
        }
        if(*str >=65 || *str <=90 || *str >= 97 || *str <= 122 )
        {
            consonents++;
        }
        str++;
    }
    printf("Number of vowels are:  %d\n",vowels);
    printf("Number of consonants are: %d\n",consonents-vowels);
}
int main()
{
    char str[50];
    printf("Enter a string to know the number of vowals and consonents in it: ");
    scanf("%s",str);
    count(str);
}