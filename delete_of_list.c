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
void delete(){
    struct list *save;
    int loc;
    ptr=node;
    save=node->next;
    if(node==NULL)
        printf("Underflow");
    printf("Enter the location of item to delete: ");
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
    delete();
    display();
    return 0;
}