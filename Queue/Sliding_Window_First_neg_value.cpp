#include<iostream>
#include<deque>
#include<vector>
using namespace std;

void solve(int arr[],int n,int k){
    deque<int> q;

    // process the first window
    for(int i =0;i<k;i++){
        if(arr[i]<0)
            q.push_back(i);
    }


// remaining window processing
    for(int i =k;i<n;i++){
        if(q.empty()){
            cout<<0<<" ";
        }else{
            cout<<arr[q.front()]<<" ";
        }

        // remove out of window element

        while((!q.empty())&&(i-q.front()>=k)){
            q.pop_front();
        }

        // checking current element for insertion
        if(arr[i]<0)
            q.push_back(i);
    }

    if(q.empty()){
            cout<<0<<" ";
        }else{
            cout<<arr[q.front()]<<" ";
        }

}


int main(){
int arr[]={12,-1,-7,8,-15,30,16,28};

int size = 8;
int k =3;
solve(arr,size,k);
return 0;
}