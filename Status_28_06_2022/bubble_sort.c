#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
int len = 0;

void *bubble(void *ptr)
{
    int temp = 0;
    int *arr = ptr;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void *print(void *ptr)
{
    int *arr = ptr;
    printf("\n");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int num[] = {7,6,4,5,7,7,6,45,3,3,5,7,67,5,43,2,2,5,6,78,9,78,6,54,3};
    len = sizeof(num) / sizeof(int);

    pthread_t th, pr;

    printf("Array before sorting: ");
    pthread_create(&pr, NULL, print, num);
    pthread_join(pr, NULL);

    pthread_create(&th, NULL, bubble, num);
    pthread_join(th, NULL);

    printf("Array after sorting: ");
    pthread_create(&pr, NULL, print, num);
    pthread_join(pr, NULL);

}