#include <stdio.h>
#define size 1000000
int Top=-1,a[size];
void Push();
void Pop();
int main(){
    while (1){
		int choice;
		printf("\nOperations performed by Stack");
		printf("\n1.Push the element\n2.Pop the element\n3.End");
		printf("\n\nEnter the choice: ");
		scanf("%d",&choice);
		switch(choice){
    		case 1:
    			Push();
    			break;
    		case 2:
    			Pop();
    			break;
    		case 3:
    		    exit(0);
    		default:
			    printf("\nInvalid choice!!");
		}
    }
    return 0;
}
void Push(){
    if(Top==size-1)
        printf("Overflow");
    else{
        int n;
        printf("Enter the element to insert to the stack: ");
        scanf("%d",&n);
        Top=Top+1;
        a[Top]=n;
        printf("Element is inserted: ");
        printf("%d",a[Top]);
        printf("\nElements present in the stack: \n");
		for (int i = Top; i >= 0; --i)
			printf("%d\n", a[i]);
    }
}
void Pop(){
    if(Top==-1)
        printf("Underflow");
    else{
        printf("\nPopped element:  %d", a[Top]);
		Top = Top - 1;
		printf("\nElement deleted\n");
		printf("\nElements present in the stack: \n");
		for (int i = Top; i >= 0; --i)
			printf("%d\n", a[i]);
    }
}