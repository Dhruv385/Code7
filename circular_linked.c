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
    display();
    return 0;
}