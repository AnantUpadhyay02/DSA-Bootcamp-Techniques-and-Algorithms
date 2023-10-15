#include<iostream>

using namespace std;

class queue {
    public:
    int *arr;
    int size;
    int front;
    int rear;
    queue(int size){
        this -> size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    void push(int data){
        if(rear == size)
            cout<<"Q is full "<<endl;
        else{
            
        }
    }

};

int main(){

return 0;
}