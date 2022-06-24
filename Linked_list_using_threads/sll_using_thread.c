#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

typedef struct node
{
    struct node *link;
    int data;
}sll;

sll *head = NULL;

void insert(int data);
void *ins(void *data);
void display();
void *disp();

int main()
{
    insert(2);
    insert(3);
    insert(4);
    display();
}

void insert(int data)
{
    pthread_t one;
    pthread_create(&one,NULL,ins,&data);
    pthread_join(one,NULL);
}

void *ins(void *data)
{
    sll *newnode = malloc(sizeof(sll));
    if(newnode == NULL)
    {
        printf("Memory allocation failed\n");
    }
    else
    {
        newnode->data = *(int *)data;
        newnode->link = NULL;
        if(head == NULL)
        {
            head = newnode;
        }
        else
        {
            sll *temp = head;
            while(temp->link != NULL)
            {
                temp = temp->link;
            }
            temp->link = newnode;
        }
    }
}

void display()
{
        pthread_t one;
        pthread_create(&one,NULL,disp,NULL);
        pthread_join(one,NULL);
}

void *disp()
{
    if(head == NULL)
    {
        printf("Linked list is empty\n");
    }
    else
    {
        sll *temp = head;
        int num=0;
        while(temp != NULL)
        {
            printf("Data at node %d is %d\n",++num,temp->data);
            temp = temp->link;
        }
    }
}