#include<iostream>
#include<stack>
using namespace std;
// 50-50 split is not necessary because of the memory wastage

// better approach in this case is to start one stack from 0 and another from size


class Stack {
    private:
    int *arr;
    int size;
    int top1;
    int top2;

    public:
    Stack(int size){
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 =size;

    }

    // functions

    void push1(int data){
        if(top2-top1 == -1){
            cout<<"Stack Overflow"<<endl;
        }
        else{
            top1++;
            arr[top1]=data;
        }
    }

    void pop1(){
        if(top1 == -1){
            cout<<"Stack Underflow"<<endl;
        }else{
            top1--;

        }
    }

    void push2(int data){
            if(top2-top1 == -1){
            cout<<"Stack Overflow"<<endl;
        }
        else{
            top2--;
            arr[top2]=data;
        }
        }

        void pop2(){
            if(top2 == size){
                cout<<"Stack Underflow"<<endl;
            }else   
                top2++;
        }

};
int main(){

    Stack s(10);

    s.push1(10);
    s.push2(9);
    s.push1(8);
    s.push2(7);

    


return 0;
}