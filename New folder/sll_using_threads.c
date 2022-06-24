// #include <stdio.h>
// #include <pthread.h>
// #include <stdlib.h>
// #include <unistd.h>

// pthread_mutex_t lock;

// typedef struct node
// {
//     int data;
//     struct node *link;
// } sll;

// sll *head = NULL;

// void insert(int data);
// void *add(void *data);
// void display();
// void *disp();

// int main()
// {
//     int len = 0;
//     printf("Enter the len of arrary: ");
//     scanf("%d", &len);
//     int arr[len];
//     printf("Enter %d elements: ", len);
//     for (int i = 0; i < len; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     pthread_t one[len];
//     for (int i = 0; i < len; i++)
//     {
//         pthread_create(&one[i], NULL, add, &arr[i]);
//         //pthread_join(one[i], NULL);
//     }
//     display();
// }

// void *add(void *data)
// {
//     //pthread_mutex_lock(&lock);
//     sll *newnode = malloc(sizeof(sll));
//     if (newnode == NULL)
//     {
//         printf("Memory allocation failed\n");
//     }
//     else
//     {
//         newnode->data = *(int *)data;
//         newnode->link = NULL;
//         if (head == NULL)
//         {
//             head = newnode;
//         }
//         else
//         {
//             sll *temp = head;
//             while (temp->link != NULL)
//             {
//                 temp = temp->link;
//             }
//             temp->link = newnode;
//         }
//     } 
    
//     //pthread_mutex_unlock(&lock);
// }

// void display()
// {
//     pthread_t one;
//     pthread_create(&one, NULL, disp, NULL);
//     pthread_join(one, NULL);
// }

// void *disp()
// {
//     if (head == NULL)
//     {
//         printf("Linked list is empty\n");
//     }
//     else
//     {
//         sll *temp = head;
//         int one = 0;
//         while (temp != NULL)
//         {
//             printf("%dst value is %d\n", ++one, temp->data);
//             temp = temp->link;
//         }
//     }
// }