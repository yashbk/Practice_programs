#include <stdio.h>

typedef struct one
{
    int value;
}str;

void print_str(int len,str (*ptr)[len])
{
    for(int i=0;i<len;i++)
    {
        printf("%d \n",(*(ptr)+i)->value);
    }
}

int main()
{
    str num[10]; //Array of structure
    for(int i=0;i<10;i++)
    {
        num[i].value = i+10;
    } 
    print_str(10,&num);
}