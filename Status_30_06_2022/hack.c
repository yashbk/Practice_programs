//Program to get a value from a function of return type pointer(any type)
// long and pointer type is same so conversion from long to pointer and pointer to long doesn't give any warning.
#include <stdio.h>

void *foo()
{
    int num = 548;
    return (void*)(long)num; 
}

int main()
{
    int num =0;
    num = (long)(int *)foo();
    printf("%d\n",num);
}