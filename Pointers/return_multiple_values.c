#include <stdio.h>

void multiple(int *integer,double *doub,char *ch)
{
    *integer = 93;
    *ch = 'm';
    *doub = 34.44;
}

int main()
{
    int num = 2;
    double decimal = 4.23;
    char alpha = 'A';
    printf("Before calling function\n"
    "Values are:\n"
    "num is %d\n"
    "decimal is %lf\n"
    "alpha is %c\n",num,decimal,alpha);
    multiple(&num,&decimal,&alpha);
    printf("After calling function\n"
    "Values are:\n"
    "num is %d\n"
    "decimal is %lf\n"
    "alpha is %c\n",num,decimal,alpha);
}