#include<bits/stdc++.h>
#define MAX 5
using namespace std;
int cqueue[MAX],front=-1,rear=-1;

void cEnQueue(int val){
    if((front==0&&rear==MAX-1)||(front==rear+1)){
        cout<<"Queue overflow"<<endl;
    }else if(front==-1){
        front=0;
        rear=0;
    }else{
        rear=(rear+1)%MAX;
        
    }
    cqueue[rear]=val;
    
}
void cDeQueue(){
    if(front==-1){
        cout<<"Queue underflow"<<endl;

    }else{
        cout<<"Element deleted from the queue is "<<cqueue[front]<<endl;
        if(front==rear){
            front=-1;
            rear=-1;
        }else{
            front=(front+1)%MAX;
        }
    }
}

void display(){
      if (front == - 1)
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Queue elements are : ";
      for (int i = front; i <= rear; i++)
      cout<<cqueue[i]<<" ";
         cout<<endl;
   }
}

int main(){
    cEnQueue(1);
    cEnQueue(2);
    cEnQueue(3);
    cEnQueue(4);
    cEnQueue(5);
    cout<<"After enqueuing :"<<endl;
    display();
    cDeQueue();
    cout<<"After dequeuing :"<<endl;
    display();

}