#include <stdio.h>
#define MAX 10

int stack[MAX];
int top = -1;
int min = 0;

void push(int data);
void pop();
void get_min();
void display();

int main()
{
    push(7);
    push(33);
    push(5);
    push(10);
    push(3);
    push(100);
    push(25);

    pop(); //3
    pop(); //3
    pop(); //5
    pop(); //5
}

void push(int data)
{
    if (top == MAX - 1)
    {
        printf("Stack is full\n");
    }
    else
    {
        stack[++top] = data;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        stack[top--] = 0;
        get_min();
    }
}

void get_min()
{
    min = stack[top];
    int temp = top;
    while (temp != -1)
    {
        if (min > stack[temp])
        {
            min = stack[temp];
        }
        temp--;
    }
    printf("Minimum value in stack after popping is %d\n",min);
}

void display()
{
    if(top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        int temp = top;
        printf("Elements in the list are: \n");
        while(temp != -1)
        {
            printf("%d\n",stack[temp--]);
        }
    }
}