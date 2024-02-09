#include <iostream>
using namespace std;
int queue[5], n = 5, front = -1, rear = - 1;
void enQueue(int val) {
   if (rear == n - 1)
   cout<<"Queue Overflow"<<endl;
   else {
      if (front == - 1)
      front = 0;
      rear++;
      queue[rear] = val;
   }
}
void deQueue() {
   if (front == - 1 || front > rear) {
      cout<<"Queue Underflow ";
      return ;
   } else {
      cout<<"Element deleted from queue is : "<< queue[front] <<endl;
      front++;;
   }
}
void display() {
   if (front == - 1)
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Queue elements are : ";
      for (int i = front; i <= rear; i++)
      cout<<queue[i]<<" ";
         cout<<endl;
   }
}
int main() {
   display();
   cout<<"Inserting elements to the queue:"<<endl;
   enQueue(1);
   enQueue(2);
   enQueue(3);
   enQueue(4);
   enQueue(5);
   cout<<"Display the elements in the queue:"<<endl;
   deQueue();
   deQueue();
   deQueue();
   deQueue();
   cout<<"After the element is deleted:"<<endl;
   display();
   cout<<"Again inserting elements:"<<endl;
   enQueue(6);
   enQueue(7);
   display();

   
   return 0;
}
