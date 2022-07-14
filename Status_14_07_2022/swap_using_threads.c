#include <stdio.h>
#include <pthread.h>

typedef struct
{
    int a;
    int b;
}st;

void *swap(void *ptr)
{
    st *num = ptr;
    num->a = num->a ^ num->b;
    num->b = num->a ^ num->b;
    num->a = num->a ^ num->b;
}

int main()
{
    st num;
    num.a = 20;
    num.b = 50;
    printf("Before swapping a = %d and b = %d\n",num.a,num.b);
    pthread_t tid;
    pthread_create(&tid,NULL,swap,&num);
    pthread_join(tid,NULL);
    printf("After swapping a = %d and b = %d\n",num.a,num.b);
}