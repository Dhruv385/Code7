#include <stdio.h>
#include <stdlib.h>
struct list{
    int info;
    struct list *next;
};
struct list *node,*next,*new1,*ptr;
void create(){
    int n,i;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        new1=(struct list *)malloc(sizeof(struct list));
        if(new1==NULL)
            printf("Overflow");
        else{
            int item,loc;
            printf("Enter the item: ");
            scanf("%d",&item);
            new1->info=item;
            new1->next=NULL;
            if(node==NULL)
                node=new1;
            else{
                ptr=node;
                while(ptr->next!=NULL){
                    ptr=ptr->next;
                }
                ptr->next=new1;
            }
        }
    }
}
void insert(){
    new1=(struct list *)malloc(sizeof(struct list));
    if(new1==NULL)
        printf("Overflow");
    else{
        int item,loc;
        printf("\nEnter the item to insert: ");
        scanf("%d",&item);
        printf("\nEnter the location of insertion: ");
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
void display(){
    int j=1;
    while(node!=NULL){
        printf("%d item: %d\n",j,node->info);
        node=node->next;
        j++;
    }
}
int main(){
    struct list node;
    create();
    insert();
    display();
    return 0;
}
