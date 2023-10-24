#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int BinarySearch(vector<int> &a, int target){
    int n = a.size();
    int low = 0, high = n-1;

    while(low<=high){
        int mid = low+ (high - low)/2;
        if(a[mid]== target){
            return mid;
        }
        if( a[mid]< target){
            low = mid+1;
        }else
            high = mid-1;
    }
    return -1;
}

int main(){
    vector<int> a;
    int n = a.size();
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>> a[i];
    }
    int target;
    cin>> target;


return 0;
}