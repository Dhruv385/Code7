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
void merge(int a[],int p,int q,int r){
    int n1=q-p+1;
    int n2=r-q;
    int L[n1],M[n2];
    for(int i=0;i<n1;i++)
        L[i]=a[p+i];
    for(int j=0;j<n2;j++)
        M[j]=a[q+1+j];
    int i, j, k;
    i = 0;
    j = 0;
    k = p;
    while(i<n1 && j<n2){
        if(L[i]<M[j]){
            a[k]=L[i];
            i++;
            k++;
        }
        else if(L[i]>M[j]){
            a[k]=M[j];
            j++;
            k++;
        }
        else if(L[i]==M[j]){
            a[k]=L[i];
            i++;
            k++;
            a[k]=M[j];
            j++;
            k++;
        }
    }
    while(i<n1){
        a[k]=L[i];
        i++;
        k++;
    }
    while(j<n2){
        a[k]=M[j];
        j++;
        k++;
    }
}
void mergeSort(int a[], int l, int r) {
  if (l < r) {
    int m = l + (r - l) / 2;
    mergeSort(a, l, m);
    mergeSort(a, m + 1, r);
    merge(a, l, m, r);
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
    cout<<"4 for mergeSort"<<endl;
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
        case 4:
            mergeSort(a,0,n-1);
            display(a,n);
            break;
        default:
            cout<<"Error!";
    }
    return 0;
}