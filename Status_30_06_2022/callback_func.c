#include <stdio.h>

void foo1(int a,int b)
{
    printf("Inside a normal function\n");
    printf("%d\n",a+b);
}

int foo(void (*callback)(int,int))
{
    printf("Inside a callback function\n");
    callback(2,3);
}

int main()
{
    foo(foo1);
}
