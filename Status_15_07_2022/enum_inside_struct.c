#include <stdio.h>

typedef struct 
{
    enum days
    {
        monday,tuesday,wednesday,thursday,friday,saturday
    }day; //Having a enum variable is mandatory to access elements 
}st;

int main()
{
    st good_day;
    good_day.day = monday; 
    printf("%d\n",good_day.day); //Can be accessed using st variable.enum variable
    
    int day = monday;
    day = tuesday;
    printf("%d",day);

}