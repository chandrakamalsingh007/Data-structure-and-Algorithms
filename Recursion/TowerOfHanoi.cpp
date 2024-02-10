#include<bits/stdc++.h>
using namespace std;
void transfer(int n,char from,char to,char temp);
int main(){
    int n;
    cout<<"Enter no of disk: ";
    cin>>n;
    transfer(n,'A','C','B');
    return 0;
}
void transfer(int n,char from,char to,char temp){
    if(n==0){
        return ;
    }else{
    transfer(n-1,from,temp,to);
    cout<<"Move disk "<<n<<" from "<<from<<" to "<<to<<endl;
    transfer(n-1,temp,to,from);
    }
   
}