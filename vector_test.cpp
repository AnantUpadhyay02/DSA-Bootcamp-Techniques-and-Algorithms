#include<iostream>
#include<vector>
using namespace std;
void printVector(vector<int>&arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
vector<int>arr;
vector<int>brr;
int n;
cin>>n;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n;i++){
    cin>>brr[i];
}
printVector(arr);
printVector(brr);

return 0;
}