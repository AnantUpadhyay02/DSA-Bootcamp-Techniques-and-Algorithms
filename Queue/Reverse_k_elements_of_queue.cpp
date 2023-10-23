#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void reversekQue(queue<int> &q, int k){

    stack<int> s;

    int count = 0;
    int n = q.size();

    if(k <= 0 || k >n)
        return;

    // Step 1: K elements Queue -> stack
    while(!q.empty()){
        int temp = q.front();
        q.pop();
        s.push(temp);
        count++;

        if(count == k)
            break;
    }

    // Step 2: Stack -> element

    while(!s.empty()){
        int ele = s.top();
        s.pop();

        q.push(ele);
    }

    // Step 3: Push n-k elements from q front to back
    count = 0;
    while(!q.empty() && n-k != 0){
        int temp = q.front();
        q.pop();

        q.push(temp);
        count++;

        if(count == n-k)
            break;
    }
}


int main(){

    queue<int> q;

    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);


    reversekQue(q,3);

    cout<<"PRINTING"<<endl;

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;


return 0;
}