#include <stdio.h>

typedef enum
{
    a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w = -20,x,y,z
}alpha;

int main()
{

    int num = z; // Initializing num with a enum element
    printf("Assigned enum element to integer %d\n", num);

    alpha one = z;   // enum variable can take only signed integers and enum elements
    printf("Size of enum is %zu\n", sizeof(one)); // prints 4
    one = 'A'; // Well this is basically ascii so this is valid

    //Accessing enum elements
    printf("Accessing enum elements:\n");
    printf("Without enum variable %d %d %d %d\n",a,b,c,d); //Without enum variable
    printf("With enum variable %d\n",one);  //With enum variable

    alpha two = 2147483647; //Max value a enum variable can take is (2^31) - 1
    printf("Max positive value a enum can store is %d\n",two);
    printf("%zu\n",sizeof(two));
}