#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node *head;
struct node *new_node;
struct node *cur;
int current_total_nodes;
struct node *cur1;
void createList(int x)
{
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->info = x;
    new_node->next = NULL;
    head = new_node;
}
void insertattop(int x)
{
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->info = x;
    new_node->next = head;
    head = new_node;
}
void treversed()
{
    int i = 0;
    cur = head;
    while (cur != NULL)
    {
        printf(" [node %d] : %d\n", i + 1, cur->info);
        cur = cur->next;
        i++;
    }
    current_total_nodes = i;
    printf("number of nodes : %d\n", i);
}
void delete()
{
    cur = head;
    head = cur->next;
    free(cur);
}
void insert_at_kth_node(int data, int k)
{
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->info = data;
    cur = head;
    for (int i = 0; i < (k - 1) && (cur != NULL); i++)
    {
        cur = cur->next;
    }
    new_node->next = cur->next;
    cur->next = new_node;
    treversed();
}
void insertatlast(int data)
{
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->info = data;
    cur = head;
    for (int i = 0; i < current_total_nodes - 1; i++)
    {
        cur = cur->next;
    }
    new_node->next = NULL;
    cur->next = new_node;
    treversed();
}
void delete_from_kth_node(int k)
{
    cur = head;
    for (int i = 0; i < k - 1; i++)
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
    for (int i = 1; (i < current_total_nodes - 1) && cur != NULL; i++)
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
            int x;
            printf("Enter the data :");
            scanf("%d", &x);
            createList(x);
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
            treversed();
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
            printf("enter the data for the node :\n");
            scanf("%d", &data);
            insertatlast(data);
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
        default:
            break;
        }
    }
    return 0;
}