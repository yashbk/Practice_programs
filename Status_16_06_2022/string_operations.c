#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv)
{

    char *ptr[] = {"Apple", "Mango", "Banana", "Orange"}; //Array of strings
    for(int i=0;i<4;i++)
    {
        printf("%s\n",*(ptr+i));
    }

    //Printing strings from argument list
    for(int i=0;i<argc;i++)
    {
        printf("%s\n",*(argv+i));
    }

    char **str = malloc(sizeof(char *)*5); //Array of string using malloc
    for(int i=0;i<5;i++)
    {
        scanf("%s",str+i);
    }
    for(int i=0;i<5;i++)
    {
        printf("%s\n",str+i);
    }
}