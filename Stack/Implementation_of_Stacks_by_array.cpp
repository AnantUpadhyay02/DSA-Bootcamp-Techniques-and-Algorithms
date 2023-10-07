#include<iostream>
#include<stack>
using namespace std;

class Stack {
    public:
        int *arr;
        int size;
        int top;

        Stack(int size){
            arr = new int[size];
            this->size = size;
            top = -1;
        }

    //Functions or Behavior
    void push(int data){
        if(size - top>1){// Space available
        top++;
        arr[top]= data;
        }else{
            cout<<"Stack Overflow"<<endl;
        }

    }

    void pop(){
        if(top == -1){
            cout<<"Stack Underflow"<<endl;
        }else{
            top--;
        }
    }

    void gettop(){
        if(top == -1){
            cout<<"No element in the stack"<<endl;
        }else{
            cout<<arr[top];
        }

    }

    int getsize(){ 
        return top+1;
    }

    bool isempty(){
        if(top ==-1)
            return true;
        else
            return false;

    }

};

int main(){

    //Creathing stack
    Stack s(10); // Size defining is necessary because we have given size in the class

    cout<<s.isempty()<<endl;
    s.push(10);
    s.push(3);
    s.push(8);
    s.gettop();
    s.pop();
    cout<<s.isempty()<<endl;


return 0;
}