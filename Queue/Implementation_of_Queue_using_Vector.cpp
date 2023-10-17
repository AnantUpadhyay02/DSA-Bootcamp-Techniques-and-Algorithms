#include<iostream>

using namespace std;

class queue {
    public:
    int *arr;
    int size;
    int front;
    int rear;
    queue(){
        // this -> size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    void push(int data){
        if(rear == size)
            cout<<"Q is full "<<endl;
        else{
            arr[rear] = data;
            rear++;
        }
    }

    void pop(){
        if(front == rear){
            cout<<"Queue is empty"<<endl;
        }
        else{
            arr[front]= -1; // this is just to mark the location
            front++;
            if(front == rear){
                front = 0;
                rear = 0;
            }
        }
    }

    void getfront(){
        if(front == rear){
            cout<<"Queue is empty"<<endl;
        }
        else{
            cout<<arr[front]<<endl;
        }
    }

    bool isEmpty(){
        if(front == rear){
            return true;
        }
        else
            return false;

    }

    int getSize(){
        return rear - front;
    }

};

int main(){
    queue q1;
    q1.push(50);
    q1.push(40);
    q1.push(30);
    q1.push(70);

    q1.getfront();

    cout<<q1.isEmpty()<<endl;

    q1.pop();

    q1.getfront();
    cout<<q1.getSize()<<endl;

    // Printing the whole queue

    while(!q1.isEmpty()){
        q1.getfront();
        q1.pop();
    }

    cout<<q1.getSize()<<endl;
return 0;
}