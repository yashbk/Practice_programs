#include <stdio.h>

int add(int,int);
int sub(int,int);

int main()
{
    int num1=0,num2=0;
    printf("Enter two values: ");
    scanf("%d%d",&num1,&num2);
    printf("%d+%d=%d\n",num1,num2,add(num1,num2));
    printf("%d-%d=%d\n",num1,num2,sub(num1,num2));
    return 0;
}