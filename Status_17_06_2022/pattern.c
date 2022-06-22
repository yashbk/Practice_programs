
/*Description : WAP to print below pattern
    0
   -101
  -2-1012
 -3-2-10123
-4-3-2-101234
 -3-2-10123
  -2-1012
   -101
    0
 */

#include <stdio.h>

int main()
{
    int num, limit;
    printf("Enter a number\n");
    scanf("%d", &num);
    limit = num*2-1;
    int m=0;

    for (int i = 1; i <= limit; i++)
    {
        if (i <= num)
        {
            for (int j = i; j < num; j++)
            {
                printf(" ");
            }
            //printf("%d ",m);
            m = (i-1)*-1;
            for (int k=1;k<=i*2 -1;k++)
            {
                printf("%d",m++);
            }
        }
        else
        {
            for(int k=1;k<=i-num;k++)
            {
                printf(" ");
            }
            m = (limit-i) * -1;
            for(int k=1;k<=(limit-i+1)*2-1;k++)
            {
                printf("%d",m++);
            }

        }
        printf("\n");
    }
    return 0;
}
