#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


void clean(void)
{
    char ch;
    do
    {
        ch = getchar();
    } while (ch != '\n' && ch != EOF);
}

typedef struct node
{
    int data;
    struct node *link;
} cll;

void insert(cll **head, int data);
void display(cll **head);
void delete (cll **head);

int main()
{
    cll *head = NULL;
    int option;
    int data = 0;
    while (1)
    {
        printf("\t\tENTER\n"
               "\t\t\t1)INSERT\n"
               "\t\t\t2)DELETE\n"
               "\t\t\t3)DISPLAY\n"
               "\t\t\t4)QUIT\n");
        scanf("%d", &option);
        clean();
        switch (option)
        {
        case 1:
            printf("Enter the data you want to insert\n");
            scanf("%d", &data);
            clean();
            insert(&head, data);
            break;
        case 2:
            delete (&head);
            break;
        case 3:
            printf("Displaying the data of nodes: \n");
            display(&head);
            break;
        case 4:
            return 0;
        default:
            printf("Entered option is incorrect. Please enter again\n");
        }
    }

    insert(&head, 2);
    insert(&head, 4);
    insert(&head, 6);
    delete (&head);
    insert(&head, 40);
    display(&head);
}

void insert(cll **head, int data)
{
    cll *newnode = malloc(sizeof(cll));
    if (newnode == NULL)
    {
        printf("Memory allocation failed\n");
    }
    else
    {
        newnode->data = data;
        newnode->link = *head;
        cll *temp = *head;

        if (*head == NULL)
        {
            *head = newnode;
            newnode->link = *head;
        }
        else
        {
            while (temp->link != *head)
            {
                temp = temp->link;
            }
            temp->link = newnode;
        }
        printf("Data insertion successfull\n");
    }
}

void display(cll **head)
{
    if (*head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        cll *temp = *head;
        while (temp->link != *head)
        {
            printf("%d \n", temp->data);
            temp = temp->link;
        }
        printf("%d \n", temp->data);
    }
}

void delete (cll **head)
{
    if (*head == NULL)
    {
        printf("List is already empty\n");
    }
    else
    {
        cll *temp = *head;
        cll *prev = *head;
        while (temp->link != *head)
        {
            prev = temp;
            temp = temp->link;
        }
        if ((*head)->link == *head)
        {
            free(*head);
            *head = NULL;
        }
        else
        {

            prev->link = *head;
            free(temp);
        }
        printf("Deleted last node successfully\n");
    }
}