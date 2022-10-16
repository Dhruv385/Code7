#include <stdio.h>
#include <stdlib.h>

// Structure to create a node with data and the next pointer
struct list{
    int info;
    struct list *next;
};
struct list* top=NULL;

// Push() operation on a  stack
void push(int item){
    struct list *new1;
    new1=(struct list *)malloc(sizeof(struct list));
    new1->info=item; // assign value to the node
    if(top==NULL)
        new1->next = NULL;
    else
        new1->next = top; // Make the node as top
    top=new1; // top always points to the newly created node
    printf("Node is Inserted\n\n");
}

int pop() {
    if (top == NULL)
        printf("\nStack Underflow\n"); 
    else{
        struct list *temp=top;
        int temp_info=top->info;
        top=top->next;
        free(temp);
        return temp_info;
    }
}

void display() {
    // Display the elements of the stack
    if(top==NULL)
        printf("\nStack Underflow\n");
    else{
        printf("The stack is \n");
        struct list *temp=top;
        while(temp->next!=NULL){
            printf("%d--->",temp->info);
            temp=temp->next;
        }
        printf("%d--->NULL\n\n",temp->info);
    }
}

int main() {
    int choice, value;
    printf("\nImplementation of Stack using Linked List\n");
    while(1){
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            printf("\nEnter the value to insert: ");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            printf("Popped element is :%d\n", pop());
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\nWrong Choice\n");
        }
    }
}
