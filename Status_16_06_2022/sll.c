#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *link;
} sll;

void insert_at_last(sll **head, int data);
void delete_at_last(sll **head);
void display(sll **head);

int main()
{
    sll *head = NULL;
    insert_at_last(&head, 2);
    insert_at_last(&head, 3);
    insert_at_last(&head, 4);
    display(&head);
    delete_at_last(&head);
    display(&head);
}

void insert_at_last(sll **head, int data)
{
    sll *newnode = malloc(sizeof(sll));
    if (newnode == NULL)
    {
        printf("Node creation failed\n");
    }
    else
    {
        newnode->data = data;
        newnode->link = NULL;
        sll *temp = *head;
        if (*head == NULL)
        {
            *head = newnode;
        }
        else
        {
            while (temp->link != NULL)
            {
                temp = temp->link;
            }
            temp->link = newnode;
        }
    }
}

void display(sll **head)
{
    if (*head == NULL)
    {
        printf("LL is empty\n");
    }
    else
    {
        sll *temp = *head;
        while (temp != NULL)
        {
            printf("%d\n", temp->data);
            temp = temp->link;
        }
    }
}

void delete_at_last(sll **head)
{
    if (*head == NULL)
    {
        printf("The list is empty\n");
    }
    else
    {
        sll *temp = *head;
        sll *prev = NULL;
        if ((*head)->link == NULL)
        {
            *head = NULL;
        }
        else
        {
            while (temp->link != NULL)
            {
                prev = temp;
                temp = temp->link;
            }
            free(temp);
            prev->link = NULL;
        }
    }
}