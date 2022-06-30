#include <stdio.h>

long long int recur(int num)
{
    if(num == 0)
    {
        return 1;
    }
    else
    {
        return num * recur(num - 1);
    }
}

int main()
{
    int num = 0;
    printf("Enter the number to get the factorial of it: ");
    scanf("%d",&num);
    printf("Factorial of number %d is %lld\n",num,recur(num));
}