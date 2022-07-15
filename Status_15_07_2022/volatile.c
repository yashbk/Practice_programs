#include <stdio.h>

int main()
{
    int a = 5;
    volatile int b = 5;
    int c = 5;
    a = ++a + ++a + ++a;
    printf("%d\n",a);
    b = ++b + ++b + ++b;
    printf("%d\n",b);
    c = c++ + c++ + c++;
    printf("%d\n",c);
}