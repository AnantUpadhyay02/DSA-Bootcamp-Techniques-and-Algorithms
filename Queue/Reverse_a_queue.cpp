#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseQue (queue<int> &q){

    stack<int> s;

    // Pull all elements of Q in the stack
    while(!q.empty()){
        int element = q.front();
        q.pop();

        s.push(element);
    }

    // Put all elements in the stack back in the queue

    while(!s.empty()){
        int element = s.top();
        s.pop();

        q.push(element);
    }
}


int main(){

    queue<int> q;

    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);


    reverseQue(q);

    cout<<"PRINTING"<<endl;

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;

return 0;
}