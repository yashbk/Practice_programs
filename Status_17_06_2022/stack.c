#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *link;
}stack;

void push(stack **top,int data);
void pop(stack **top);
void display(stack **top);
int peek(stack **top);
void deallocate(stack **top);

int main()
{
    stack *top = NULL;
    for(int i=1;i<10;i++)
    push(&top,i);
    pop(&top);
    printf("After popping\n");
    display(&top);
    printf("The value at top is %d\n",peek(&top));
    deallocate(&top);
    deallocate(&top);
}

void push(stack **top,int data)
{
    stack *newnode = malloc(sizeof(stack));
    if(newnode == NULL)
    {
        printf("Memory allocation failed\n");
    }
    else
    {
        newnode->data = data;
        newnode->link = *top;
        *top = newnode;
    }
}

void pop(stack **top)
{
    if(*top == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        stack *temp = *top;
        *top = (*top)->link;
        free(temp);
    }
}

void display(stack **top)
{
    if(*top == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        stack *temp = *top;
        while(temp->link != NULL )
        {
            printf("%d\n",temp->data);
            temp = temp->link;
        }
    }
}

int peek(stack **top)
{
    if(*top == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        return (*top)->data;
    }
}
void deallocate(stack **top)
{
    if(*top == NULL)
    {
        printf("No memory allocated to deallocate\n");
    }
    else
    {
        stack *temp = NULL;
        while(*top != NULL)
        {
            temp = *top;
            *top = (*top)->link;
            free(temp);
        }
    }
}