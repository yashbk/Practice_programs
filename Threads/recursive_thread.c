#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void *print()
{
    
    pthread_t new;
    printf("Inside thread\n");
    //sleep(1);
    pthread_create(&new,NULL,print,NULL);
    pthread_join(new,NULL);
}

int main()
{
    pthread_t new;
    pthread_create(&new,NULL,print,NULL);
    pthread_join(new,NULL);
    return 0;
}