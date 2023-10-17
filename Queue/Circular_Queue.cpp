#include<iostream>
using namespace std;

class Cqueue {
    public:
        int size;
        int *arr;
        int front;
        int rear;
    // Constructor
    Cqueue(int size){
        this -> size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    // Push Function

    void push(int data){
        // Queue is full
        if(rear== size-1 && front == 0){
            cout<<"Queue is full"<<endl;
        }
        else if(rear == front-1){
            cout<<"Queue is full"<<endl;
        }
        // Insertion
        else if(front == -1){
            front = rear = 0;
            arr[rear] = data;
        }
        // Circular que condition
        else if(rear == size -1 && front !=0){
            rear = 0;
            arr[rear] = data;
        }
        // normal flow
        else{
            rear++;
            arr[rear]=data;
        }
    }

    // Pop function
    void pop(){
        // empty check
        if(front ==-1){
            cout<<"Queue is empty"<<endl;
        }

        // single element
        else if(front == rear){
            arr[front] =-1;
            front = -1;
            rear = -1;
        }

        // Circular nature
        else if(front == size-1){
            front =0;
        }

        // normal flow
        else{
            front++;
        }
    }

    void getfront(){
        cout<<arr[front]<<endl;
    }

};

int main(){
    Cqueue q1(5);
    q1.push(4);
    q1.push(5);
    q1.push(6);
    q1.push(2);
    q1.push(7);

    q1.pop();

    q1.getfront();

    


return 0;
}