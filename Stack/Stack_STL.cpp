#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;
    s.push(25);
    s.push(45);
    s.push(34);
    s.pop();
    cout<<"Size of stack "<<s.size()<<endl;// size gives the number of elements present in the stack
    cout<<"top element "<<s.top()<<endl;
return 0;
}