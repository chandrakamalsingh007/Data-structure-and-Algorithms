#include <iostream>
using namespace std;
int stack[10], n=10, top=-1;
void push(int val) {
   if(top>=n-1)
   cout<<"Stack Overflow"<<endl;
   else {
      top++;
      stack[top]=val;
   }
}
void pop() {
   if(top<=-1)
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< stack[top] <<endl;
      top--;
   }
}
void display() {
   if(top>=0) {
      cout<<"Stack elements are:";
      for(int i=top; i>=0; i--)
      cout<<stack[i]<<" ";
      cout<<endl;
   } else
   cout<<"Stack is empty";
}
int main() {
   push(2);
   push(4);
    push(6);
   push(8);
    push(10);
   push(12);
   push(20);
   push(21);
   push(23);
   push(24);
   cout<<"After push: "<<endl;
   display();

   pop();
   pop();
   pop();
   cout<<"After popping some elements:"<<endl;
   display();

}