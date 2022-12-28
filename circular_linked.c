#include <stdio.h>
#include <stdlib.h>
struct list{
    int info;
    struct list *next;
};
struct list *new1,*next,*ptr,*node;
void create(){
    int i,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        new1=(struct list *)malloc(sizeof(struct list));
        if(new1==NULL)
            printf("Node not created");
        else{
            int item;
            printf("Enter the item: ");
            scanf("%d",&item);
            new1->info=item;
            if(node==NULL)
                node=new1;
            else{
                ptr=node;
                while(ptr->next!=NULL)
                    ptr=ptr->next;
                ptr->next=new1;
                new1=node;
            }
        }
    }
}
void first_insert(){
    new1=(struct list *)malloc(sizeof(struct list));
    if(new1==NULL)
        printf("Overflow");
    else{
        int item;
        printf("Enter the item: ");
        scanf("%d",&item);
        new1->info=item;
        new1->next=node;
        node=new1;
    }
}
void insert(){
    new1=(struct list *)malloc(sizeof(struct list));
    if(new1==NULL)
        printf("Overflow");
    else{
        int item,loc;
        printf("Enter the item to insert: ");
        scanf("%d",&item);
        printf("Enter the location of insertion: ");
        scanf("%d",&loc);
        new1->info=item;
        int i=1;
        ptr=node;
        while(i!=loc-1){
            ptr=ptr->next;
            i++;
        }
        new1->next=ptr->next;
        ptr->next=new1;
    }
}
void first_delete1(){
    int temp;
    if(node==NULL)
        printf("Underflow");
    else{
        temp=node->info;
        node=node->next;
    }
}
void delete1(){
    struct list *save;
    ptr=node;
    save=node->next;
    if(node==NULL)
        printf("Underflow");
    int loc;
    printf("Enter the location of deletion: ");
    scanf("%d",&loc);
    int i=1;
    while(i!=loc-1){
        ptr=ptr->next;
        save=save->next;
        i++;
    }
    ptr->next=save->next;
}
void display(){
    ptr=node;
    while(ptr){
        printf("%d->",ptr->info);
        ptr=ptr->next;
    }
    printf("%d",node->info);
}
int main(){
    struct list *node;
    create();
    int t;
    printf("1 for insert_first\n2 for insert\n3 for first_delete\n4 for delete");
    printf("\nEnter your choice: ");
    scanf("%d",&t);
        switch(t){
            case 1:
                first_insert();
                display();
                break;
            case 2:
                insert();
                display();
                break;
            case 3:
                first_delete1();
                display();
                break;
            case 4:
                delete1();
                display();
                break;
        }
    return 0;
}