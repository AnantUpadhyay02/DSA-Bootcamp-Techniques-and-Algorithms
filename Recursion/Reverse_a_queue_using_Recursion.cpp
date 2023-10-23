#include<iostream>
#include<queue>
using namespace std;

void reverseQueRec(queue<int> &q){

    // Base case
    if(q.empty()){
        return;
    }
    int temp =q.front();
    q.pop();


    reverseQueRec(q);

    q.push(temp);

}



int main(){
    queue<int> q;

    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);


    reverseQueRec(q);

    cout<<"PRINTING"<<endl;

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;

return 0;
}