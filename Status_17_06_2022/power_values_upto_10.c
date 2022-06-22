#include <stdio.h>

void tables(int *num)
{
    printf("%d^%d = %d\n",*num,0,1);
    for(int i=0;i<10;i++)
    {
        printf("%d^%d = %d\n",*num,i+1,*num<<i);
    }
}

int main()
{
    int num=0;
    printf("Enter the number to get it's power value upto ^10: ");
    scanf("%d",&num);
    tables(&num);
}