#include <stdio.h>

int add(int,int);

int main()
{
    int num1=0,num2=0;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);

    printf("%d+%d=%d",num1,num2,add(num1,num2));
    return 0;
}