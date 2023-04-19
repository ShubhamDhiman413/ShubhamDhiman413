// IMPLEMENTATION USING ARRAY
#include <iostream>
#include <stack>
using namespace std;
class Stack{
 public:
    int *arr;
    int top;
    int size;
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    void push(int element){
        if(size - top>1){
        top++;
        arr[top]=element;
        }
        else{
         cout<<"stack overfloew"<<endl;
     }
    }

     void pop(){
        if(top>=0){
            top--;
        }
     }

     int peek(){
        if(top>=0 && top<size){
            return arr[top];
        }
        else{
            cout<<"stack is empty"<<endl;
        }
     }
     
         bool isempty(){
        if(top ==-1){
            return true;
        }
        else{
            return false;
        }
     }
};

int main() {
  Stack s(7);
  s.push(7);
  s.push(6);
  s.push(5);
  s.push(4);
  s.push(3);
  s.push(2);
  s.push(1);
  s.pop();
  cout<< s.top<<endl;
}
