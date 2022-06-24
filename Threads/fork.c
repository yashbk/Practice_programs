#include <stdio.h>
#include <unistd.h>

int main()
{
    int num = fork();
    if (!num)
    {
        printf("%d\n", num);
        printf("Child pid is %d\n",getppid());
    }
    printf("Parent pid is %d\n",getppid());

    while (1)
        ;
}