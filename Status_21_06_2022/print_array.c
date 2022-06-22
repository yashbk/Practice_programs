#include <stdio.h>
#include <pthread.h>

int len=0;

void *print(void *arr)
{
    for(int i=0;i<len;i++)
    {
        printf("%d ",*((int *)arr+i));
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    len = sizeof(arr)/sizeof(int);
    pthread_t new;
    pthread_create(&new,NULL,print,arr);
    pthread_join(new,NULL);
    return 0;
}