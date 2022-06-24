#include <stdio.h>
#include <string.h>

void rm_repeated(char *str)
{
    for(int i=0;i<strlen(str);i++)
    {
        for(int j=i;j<strlen(str);j++)
        {
            if(*(str+i) == *(str+j) && *(str+i) != '~')
            {
                *(str+j) = '~';
            }
        }
    }
    printf("%s\n",str);
    char temp[strlen(str)+1]; 
    int j=0;
    for(int i=0;i<strlen(str);i++)
    {
        if(*(str+i) != '~')
        {
            str[j++] = *(str+i);
        }
    }

}

int main()
{
    char str[] = "abaacd";
    rm_repeated(str);
    printf("%s",str);
}