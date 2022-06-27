//Program to show critical section problem solution using mutex. In this program screen is the critical resource.

#include <stdio.h>
#include<stdlib.h>
#include <pthread.h>

pthread_mutex_t key;

void *egg()
{
    pthread_mutex_lock(&key);   
    for(int i=0;i<=100;i++)
    {
        printf("egg\n");
    }
    pthread_mutex_unlock(&key);
}

void *chicken()
{
    pthread_mutex_lock(&key);
    for(char i = 0;i<=100;i++)
    {
        printf("chicken\n");
    }
    pthread_mutex_unlock(&key);
}

int main()
{
    pthread_t eggvar,chickenvar;
    pthread_create(&eggvar,NULL,egg,NULL);
    pthread_create(&chickenvar,NULL,chicken,NULL);
    pthread_join(chickenvar,NULL);
    pthread_join(eggvar,NULL);
}