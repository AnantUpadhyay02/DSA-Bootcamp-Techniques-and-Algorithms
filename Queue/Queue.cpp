#include<iostream>
#include<queue>
using namespace std;


int main(){
    queue<int> q;

    q.push(4);
    q.push(56);
    q.push(33);
    q.push(15);

    cout<<"Size of queue "<<q.size()<<endl;

    q.pop();

    cout<<"size of queue "<<q.size()<<endl;

    if(q.empty())
        cout<<"empty queue "<<endl;
    else    
        cout<<"Queue is not empty "<<endl;

    cout<<q.front()<<" is the front element"<<endl;

    cout<<q.back()<<" the element in the back"<<endl;

return 0;
}