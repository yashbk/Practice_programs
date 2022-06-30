#include <stdio.h>
#include <pthread.h>

void foo()
{
    printf("foo called\n");
}

void *thread(void *ptr) //Taking address of a function
{
    printf("This is a callback thread handler\n");
    void (*func)() = ptr; //creating a func pointer and assigning to address of pointer received
    (*func)(); 
}

int main()
{
    pthread_t pid;
    pthread_create(&pid,NULL,thread,foo);
    pthread_join(pid,NULL);
}