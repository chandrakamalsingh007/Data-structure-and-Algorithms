#include<bits/stdc++.h>
using namespace std;
int factorial(int n);
int main(){
    int n,fact;
    cout<<"Enter num: ";
    cin>>n;
    fact = factorial(n);
    cout<<"The factorial of "<<n<<" is "<<fact<<endl;

    return 0;
}
int factorial(int n){
    if(n==0||n==1){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}