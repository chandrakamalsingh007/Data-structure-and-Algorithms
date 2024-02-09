#include<bits/stdc++.h>
using namespace std;
#define MAX 10
int arr[MAX];

void createArray(int arr[]){
    cout<<"Creating array:"<<endl;
    for(int i=0;i<MAX;i++){
        cout<<"Element "<<i<<" =";
        cin>>arr[i];
    }
}

void display(){
    cout<<"Total array are :"<<endl;
    for(int i = 0; i < MAX; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    createArray(arr);
    display();
    return 0;
}