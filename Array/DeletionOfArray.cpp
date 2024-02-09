#include<bits/stdc++.h>
using namespace std;

int deletionAtFirst(int arr[],int& n){
    for(int i=0;i<n;i++){
        arr[i]=arr[i+1];
    }
    return n-1;
}

int deletionAtPosition(int arr[],int& n,int pos){
    if (pos < 0 || pos > n) {
        cout << "Invalid position\n";
        return n;
    }
    for(int i=pos;i<=n;i++){
        arr[i]=arr[i+1];
    }
    return n-1;
}
int deletionAtLast(int arr[],int& n){
    arr[n-1]=arr[n];
    return n-1;
}

void display(int arr[],int n){
    cout<<"Total array are :"<<endl;
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    
    n= deletionAtFirst(arr,n);
    n= deletionAtPosition(arr,n,1);
    n= deletionAtLast(arr,n);
    display(arr,n);

    return 0;
}
