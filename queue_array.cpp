#include <iostream>
using namespace std;
#define size 100000
int rear=-1,front=-1,Q[size];
void enqueue(){
    int item;
    cout<<"Enter the item: ";
    cin>>item;
    if(front==0 && rear==size-1)
        cout<<"Overflow"<<endl;
    else if(front==-1 && rear==-1){
        front=0;
        rear=0;
    }
    else
        rear+=1;
    Q[rear]=item;
}
void dequeue(){
    int item;
    if(front==-1)
        cout<<"Underflow"<<endl;
    else{  
        item=Q[front];  
        if(front==rear){  
            front=-1;  
            rear=-1 ;  
        }  
        else  
            front=front+1;
    }
}
void display(){
    if(front==-1)
        cout<<"Queue is empty"<<endl;
    else{
        cout<<"Queue elements are : ";
        for(int i=front;i<=rear;i++)
            cout<<Q[i]<<" ";
        cout<<endl;
    }
}
int main(){
    int ch;
    while(ch!=4){
        cout<<"1) insertion element to the queue"<<endl;
        cout<<"2) Delete element from queue"<<endl;
        cout<<"3) Exit"<<endl;
        cout<<"Enter the choice: ";
        cin>>ch;
        switch(ch){
            case 1:
                enqueue();
                display();
                break;
            case 2:
                dequeue();
                display();
                break;
            case 3:
                exit(0);
                break;
            default:
                cout<<"Try Again\n";
        }
    }
        return 0;
}