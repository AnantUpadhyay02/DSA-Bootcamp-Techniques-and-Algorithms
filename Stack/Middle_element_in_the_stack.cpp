#include<iostream>
#include<stack>
using namespace std;
// We will be using recursion : backtracking
void MiddleElement(stack<int> &s, int &totalSize){
    if(totalSize==0){
        cout<<"No element in the stack"<<endl;
    }

    if(s.size() == totalSize/2 +1){
        cout<<"Middle Element: "<<s.top()<<endl;
    }
    int temp = s.top();
    s.pop();

    // Recursive call

    MiddleElement(s , totalSize);

    // Backtracking

    s.push(temp);

}

int main(){
    stack<int> s;
    s.push(70);
    s.push(60);
    s.push(50);
    s.push(40);
    s.push(30);
    s.push(20);
    s.push(10);

    int totalSize = s.size();

    MiddleElement(s,totalSize);

return 0;
}