#include <stdio.h>
#include <pthread.h>

void * rev_str(void *ptr)
{
    //printf("Inside pthread\n");
    char *last = (char*)ptr;
    while(*++last);
    int len = last - (char*)ptr;
    last--;
    char temp;
    while((char*)ptr < last)
    {
        temp = *(char*)ptr;
        *(char*)ptr++ = *last;
        *last-- = temp;
    }
}

int main()
{
    char str[] = "hello world";
    printf("Before reversing %s\n",str);
    pthread_t one;
    pthread_create(&one,NULL,rev_str,str);
    pthread_join(one,NULL);
    printf("After reversing %s\n",str);
}
