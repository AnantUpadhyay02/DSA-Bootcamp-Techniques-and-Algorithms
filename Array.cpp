#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
// void printarray(int a[], int size){
//     for(int i=0 ; i<size; i++){
//         cout<<a[i]<<" ";


//     }
//     cout<<endl;

// }
// void inc(int b[], int size){
//     b[0]=b[0]+10;

//     printarray(b, size);


// }
// bool find(int a[],int size,int n){
//     //Linear search
//     for(int i =0;i<size;i++){
//         if(a[i]==n)
//         return true;

//     }
//     return false;
// }

// function to print a vector

void printVector(vecto<int>&arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    // int n;
    // cin>>n;
    // int a[n];
    // for (int i = 0; i < 5; i++)
    // {
    //     cin>> a[i];
        

    // }
    // for(int j=0;j<5;j++){
    //     cout << a[j];
    // }
    // int a[]={5,6};
    // int size = 2;
    // inc(a,size);
    // printarray (a,size);

    // int a[10]= {1,2,3,4,5,6,7,8,9,10};
    // int size = 10;
    // cout<<"Enter the number to find";
    // int n;
    // cin>>n;
    // if (find(a,size,n)){
    //     cout<<"Found"<<endl;

    // }
    // else{
    //     cout<<"Not found"<<endl;
    // }
    // int a[10]={0,1,1,0,0,1,1};
    // int size = 7;
    // int zeros=0, ones=0;
    // for(int i=0;i<size;i++){
    //     if(a[i]==0)
    //     zeros++;
    //     if(a[i]==1)
    //     ones++;
    // }
    // cout<< " Number of zeros "<<zeros<<endl;
    // cout<<" Number of ones "<<ones<<endl;

    // int max=INT_MIN;
    // int min = INT_MAX;
    // int a[]={3,45,6,3,2,55,23,56,76};
    // int size= 9;
    // for(int i= 0; i<size;i++){
    //     if(a[i]>max)
    //     max= a[i];
    //     if(a[i]<min)
    //     min= a[i];
    // }
    // cout<<"The maximum number is "<<max<<endl;
    // cout<<"The minimun number is "<<min<<endl;

// Extreme 

    // int a[]= {1,2,3,4,5,6,7,8,9};
    // int size = 9;
    // int start =0;
    // int end = size-1;

    // while(true){
    //     if(start>end)
    //     break;
    //     if(start == end){
    //         cout<<a[start];
        
    //     }
    //     else{
        
    //         cout<<a[start]<<" ";
    //         cout<<a[end]<<" ";
    //     }
    //     start++;
    //     end--;
    // }

// REVERSE AN ARRAY

    int a[]={1,2,3,4,5,6,8,9,7};
    int size = 9;
    int start = 0;
    int end = size-1;

    while(start<=end){
        swap(a[start],a[end]);
        start++;
        end--;
    }
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }


    return 0;
}
