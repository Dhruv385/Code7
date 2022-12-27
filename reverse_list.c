#include <stdio.h>
struct list{
    int info;
    struct list *next;
};
struct list *new1,*node,*ptr,*next;
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
            new1->next=NULL;
            if(node==NULL)
                node=new1;
            else{
                ptr=node;
                while(ptr->next!=NULL)
                    ptr=ptr->next;
                ptr->next=new1;
            }
        }
    }
}
struct list *curr,*prev,*nnext;
void reverse(){
    prev=NULL;
    curr=node;
    nnext=NULL;
    while(curr!=NULL){
        nnext=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nnext;
    }
    node=prev;
}
void display(){
    int j=1;
    while(node!=NULL){
        printf("%d->",node->info);
        node=node->next;
    }
    printf("NULL");
}
int main(){
    struct list *node;
    create();
    display();
    reverse();
    display();
    return 0;
}