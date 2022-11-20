#include <iostream>
using namespace std;

void bubbleSort(int a[],int n){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
void selectionSort(int a[],int n){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
void insertionSort(int a[],int n){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=i;j>0;j--){
            if(a[j]>a[j-1]){
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }
}
void display(int a[],int n){
    int i;
    cout<<"Sorted array: "<<endl;
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
}
int main(){
    int n,i,x;
    cout<<"Enter the number of element in array: ";
    cin>>n;
    int a[n];
    cout<<"\nThe array element: "<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"1 for bubbleSort"<<endl;
    cout<<"2 for selectionSort"<<endl;
    cout<<"3 for insertionSort"<<endl;
    cout<<"Enter the number to choose: ";
    cin>>x;
    switch(x){
        case 1:
            bubbleSort(a,n);
            display(a,n);
            break;
        case 2:
            selectionSort(a,n);
            display(a,n);
            break;
        case 3:
            insertionSort(a,n);
            display(a,n);
            break;
        default:
            cout<<"Error!";
    }
    return 0;
}