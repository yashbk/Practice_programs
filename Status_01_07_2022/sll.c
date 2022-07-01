#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *link;
} sll;

void insert_at_first(sll **head, int data);
void insert_at_last(sll **head, int data);
void insert_at_middle(sll **head, int data);
void delete_at_first(sll **head);
void delete_at_last(sll **head);
void display(sll **head);
int len(sll **head);

int main()
{
    sll *head = NULL;
    insert_at_last(&head, 2);
    insert_at_last(&head, 3);
    insert_at_last(&head, 4);
    insert_at_first(&head, 9);
    insert_at_middle(&head,400);
    display(&head);
    delete_at_first(&head);
    delete_at_last(&head);
    display(&head);
}

void insert_at_last(sll **head, int data)
{
    sll *newnode = malloc(sizeof(sll));
    if (newnode == NULL)
    {
        printf("Memory allocation failed\n");
    }
    else
    {
        newnode->data = data;
        newnode->link = NULL;
        if (*head == NULL)
        {
            *head = newnode;
        }
        else
        {
            sll *temp = *head;
            while (temp->link != NULL)
            {
                temp = temp->link;
            }
            temp->link = newnode;
        }
    }
}

void insert_at_first(sll **head, int data)
{
    sll *newnode = malloc(sizeof(sll));
    if (newnode == NULL)
    {
        printf("Memory allocation failed\n");
    }
    else
    {
        newnode->data = data;
        newnode->link = *head;
        *head = newnode;
    }
}

void delete_at_first(sll **head)
{
    if (*head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        if ((*head)->link == NULL)
        {
            free(*head);
            *head = NULL;
        }
        else
        {
            sll *temp = *head;
            *head = (*head)->link;
            free(temp);
        }
    }
}

void delete_at_last(sll **head)
{
    if (*head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        sll *temp = *head;
        sll *prev = NULL;
        while (temp->link != NULL)
        {
            prev = temp;
            temp = temp->link;
        }
        prev->link = NULL;
        free(temp);
    }
}

void display(sll **head)
{
    if (*head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        putchar('\n');
        sll *temp = *head;
        while (temp != NULL)
        {
            printf("%d\v", temp->data);
            temp = temp->link;
        }
        printf("\n");
    }
}

void insert_at_middle(sll **head, int data)
{
    sll *newnode = malloc(sizeof(sll));
    if (newnode == NULL)
    {
        printf("Memory allocation failed\n");
    }
    else
    {
        newnode->data = data;
        newnode->link = NULL;
        if (*head == NULL)
        {
            *head = newnode;
        }
        else
        {
            int length = len(head);
            int middle = (length % 2 == 0) ? (length / 2) : (length + 1) / 2;
            sll *temp = *head;
            while (--middle)
            {
                temp = temp->link;
            }
            newnode->link = temp->link;
            temp->link = newnode;
        }
    }
}

int len(sll **head)
{
    sll *temp = *head;
    int len = 0;
    while (temp)
    {
        temp = temp->link;
        len++;
    }
    return len;
}

