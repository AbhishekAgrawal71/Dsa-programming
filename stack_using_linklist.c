#include<stdio.h>
#include<stdlib.h>'
struct node{
    int data;
    struct node* next;
};
struct stack{
    int *top;
    // int maxsize;
    struct node* new_node;
};
struct stack *s;
void crete_stack(){
    s->new_node=(struct node*)malloc(sizeof(struct node));
    s->new_node->next=NULL;
    s->top=s->new_node;   
}
void push(int data){

}
int main()
{

    int data;
    int n;
    int choice;
    while (choice != 7)
    {
        printf("Enter command 1 to create the stack :\n");
        printf("Enter command 2 to push an element in the stack :\n");
        printf("Enter command 3 to pop an element in the stack :\n");
        printf("Enter command 4 to peek the element in the stack :\n");
        printf("Enter command 5 to display the lement in the stack :\n");
        printf("Enter command 6 to delete the each element of stack\n");
        printf("Enter command 7 to exit :\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
        printf("Your stack is created \n");
        crete_stack();
            break;
        // case 2:
        // printf("how many elemnts you want to access :");
        // scanf("%d",&n);
        // for(int i=0;i<n;i++){
        // printf("Enter the data for %d element :",i+1);
        // scanf("%d",&data);
        // push(data);
        // printf("The data in %d element is : %d\n",i+1,s.arr[s.top]);
        // }
        //     break;
        // case 3:
        // printf("You are deleting the  top element \n");
        // printf("Before deletion the top element is :%d\n",s.arr[s.top]);
        // pop();
        // printf("After deletion the top element is %d\n",s.arr[s.top]);
        //     break;
        // case 4:
        // printf("Your top element is : %d\n",peek());
        //     break;
        // case 5:
        //     display();
        //     break;
        // case 6:
        // delete_stack();
        default:
            break;
        }
    }
    return 0;
}