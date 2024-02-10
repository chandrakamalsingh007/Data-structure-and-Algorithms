#include<bits/stdc++.h>
using namespace std;
int fib(int n);
int main(){
    int n,a;
    cout<<"Enter num: ";
    cin>>n;
    cout<<"Fibonacci series of "<<n <<" : ";
    for(int i=0;i<n;i++){
        a=fib(i);
        cout<<a<<" ";

    }

    return 0;
}

int fib(int n){
    if(n==0||n==1){
        return n;
    }else{
        return fib(n-1)+fib(n-2);
    }
}