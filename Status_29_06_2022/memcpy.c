//Own memcpy function

#include <stdio.h>
#include <stdio.h>

void *Umemcpy(void *dest, void *src, int count)
{
    while(count--)
    {
        *(char*)dest = *(char*)src;
        dest++; src++;
    }
}

int main()
{
    //Copying string
    char str[] = "abcd";
    char dest[30];
    Umemcpy(dest,str,sizeof(str));
    printf("%zu %s\n",sizeof(str),dest);

    //Copying array
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int new[10];
    Umemcpy(new,arr,sizeof(arr));
    for(int i=0;i<9;i++)
    {
        printf("%d ",new[i]);
    }

    //copying 2D array
    int _2d[][2] = {1,2,3,4,5,6};
    int _dest[2][2];
    Umemcpy(_dest,_2d,sizeof(_2d));
    putchar('\n');
    for(int i=0;i<sizeof(_2d)/sizeof(int);i++)
    {
        printf("%d ",*(*_dest+i));
    }
}