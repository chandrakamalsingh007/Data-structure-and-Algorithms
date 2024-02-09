#include<bits/stdc++.h>
using namespace std;



int insertionAtFirst(int arr[], int& n, int num) {
    for (int i = n - 1; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }
    arr[0] = num;
    return ++n;
}

int insertionAtlast(int arr[],int n,int num){
    arr[n]=num;
    return n+1;
}
int insertionAtPosition(int arr[],int n,int val,int pos){
     if (pos < 0 || pos > n) {
        cout << "Invalid position\n";
        return n;
    }
    for(int i=n-1;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=val;
    return n+1;
}
void display(int arr[],int n){
    cout<<"Total array are :"<<endl;
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);

    n = insertionAtFirst(arr, n, 0);
    n = insertionAtFirst(arr,n,45);
    n = insertionAtPosition(arr,n,58,3);
    n = insertionAtlast(arr,n,20);
    n = insertionAtlast(arr,n,52);
    display(arr, n);

    return 0;
}