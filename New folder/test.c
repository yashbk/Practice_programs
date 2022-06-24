#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

void *test(void *num)
{
    printf("hello %d and pid is %d\n", *(int *)num, getpid());
    while (1);
}

int main()
{
    {
        int num = 20;
        pthread_t one;
        pthread_create(&one, NULL, test, &num);
        pthread_join(one,NULL);
    }
    {
        int num = 40;
        pthread_t one;
        pthread_create(&one, NULL, test, &num);
        pthread_join(one,NULL);
    }
    while(1)
    {
        printf("In main\n");
        sleep(20);
    }
}