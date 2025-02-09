#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
    struct node *prev;
};
struct node *head;
struct node *new_node;
struct node *cur;
struct node *cur1;
int current_number_of_nodes;
void createList(int data)
{
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->info = data;
    new_node->next = NULL;
    new_node->prev = NULL;
    head = new_node;
}
void treversed()
{
    cur = head;
    int i = 0;
    while (cur != NULL)
    {
        printf("[node %d] is %d\n", i, cur->info);
        cur = cur->next;
        i++;
    }
    current_number_of_nodes = i;
    printf("Current total no of elements : %d", current_number_of_nodes);
}
void insertattop(int data)
{
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->info = data;
    new_node->next = head;
    new_node->prev = NULL;
    head = new_node;
    treversed();
}
void delete()
{
    cur = head;
    head = cur->next;
    free(cur);
    treversed();
}
void insert_at_kth_node(int data, int k)
{
    cur = head;
    new_node = (struct node *)malloc(sizeof(struct node));
    for (int i = 1; (i < k - 1) && (cur != NULL); i++)
    {
        cur = cur->next;
    }
    new_node->info = data;
    ;
    new_node->next = cur->next;
    cur->next = new_node;
    cur->next->prev = new_node;
    new_node->prev = cur;
    treversed();
}
void insert_at_last(int data)
{
    new_node = (struct node *)malloc(sizeof(struct node));
    cur = head;
    while (cur->next != NULL)
    {
        cur = cur->next;
    }
    new_node->info = data;
    cur->next = new_node;
    new_node->prev = cur;
    new_node->next = NULL;
    treversed();
}
void delete_from_kth_node(int k)
{
    cur = head;
    for (int i = 1; i < k - 1; i++)
    {
        cur = cur->next;
    }
    cur1 = cur->next;
    cur->next = cur1->next;
    free(cur1);
    treversed();
}
void delete_from_last_node()
{
    cur = head;
    for (int i = 1; (i < current_number_of_nodes - 1) && (cur != NULL); i++)
    {
        cur = cur->next;
    }
    cur1 = cur->next;
    cur->next = NULL;
    free(cur1);
    treversed();
}
int main()
{
    int choice;
    int number_of_elements;
    int data;
    int k;
    while (choice != 9)
    {
        printf("Enter command 1 to create a list\n ");
        printf("Enter command 2 to inserta node in a list\n ");
        printf("Enter command 3 to delete a node in  a list\n ");
        printf("Enter command 4 to treverse the list\n ");
        printf("Enter command 5 to insert at any position \n");
        printf("Enter command 6 to insert at last \n");
        printf("Enter command 7 to delete the element from any position \n");
        printf("Enter command 8 to delete the node from end \n");
        printf("Enter command 9 to exit the program\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Your list is created\n");
            printf("Enter the data :");
            scanf("%d", &data);
            createList(data);
            printf("Data: %d\n", head->info);
            break;
        case 2:
            printf("Enter how many nodes you want to create in the linklist :");
            scanf("%d", &number_of_elements);
            for (int i = 1; i <= number_of_elements; i++)
            {
                printf("insert the %d node in the list\n", i + 1);
                printf("enter the data:");
                scanf("%d", &data);
                insertattop(data);
                printf("The data of %d th node is : %d\n", i + 1, head->info);
            }
            break;
        case 3:
            printf("delete the element of list \n");
            delete ();
            break;
        case 4:
            printf("list is treversed \n");
            treversed();
            break;
        case 5:
            printf("Enter the position of node from head node :");
            scanf("%d", &k);
            printf("enter the data for the node :");
            scanf("%d", &data);
            insert_at_kth_node(data, k);
            break;
        case 6:
            printf("You are inserting an element sat last :\n");
            printf("enter the data for the node :");
            scanf("%d", &data);
            insert_at_last(data);
            break;
        case 7:
            printf("You are deleting an element from a goven position\n");
            printf("Enter the position of node from head node :\n");
            scanf("%d", &k);
            delete_from_kth_node(k);
            break;
        case 8:
            printf("you are deletting the element of last node \n");
            delete_from_last_node();
            break;
        default:
            break;
        }
    }
    return 0;
}