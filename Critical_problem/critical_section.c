//Program to show critical section problem. In this program screen is the critical resource.

#include <stdio.h>
#include<stdlib.h>
#include <pthread.h>


void *egg()
{   
    for(int i=0;i<=100;i++)
    {
        printf("egg\n");
    }
}

void *chicken()
{
    for(char i = 0;i<=100;i++)
    {
        printf("chicken\n");
    }
}

int main()
{
    pthread_t eggvar,chickenvar;
    pthread_create(&eggvar,NULL,egg,NULL);
    pthread_create(&chickenvar,NULL,chicken,NULL);
    pthread_join(chickenvar,NULL);
    pthread_join(eggvar,NULL);
}