#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
void merge(int *arr, int s, int e){
    int mid = s +(e-s)/2;
    
    int len1 = mid - (s + 1); // Length of array one after seperation 
    int len2 = e - mid; // length of array two after seperation 
    
    int *first = new int[len1];
    int *second = new int[len2];

    //Copy values in first and second array
    int k = s; // k is the first index of main array 
    for(int i = 0;i<len1;i++){
        first[i] =arr[k++];
    }
    k = mid+1;
    for(int i =0; i<len2;i++){
        second[i]= arr[k++];
    }

    //Merge the sorted arrays
    int index1 =0;
    int index2 =0;
    k = s;
    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[k++] = first[index1++];
        }
        else{
            arr[k++] = second[index2++];
        }

        while(index1<len1){
            arr[k++] = first[index1++];
        }
        while(index2<len2){
            arr[k++]= second[index2++];
        }
    }
}

void mergeSort(int *arr, int s, int e){
    //Base Case
    if(s>=e)
        return;
    
    int mid= s + (e-s)/2;

    mergeSort(arr, s, mid);// Left Sort

    mergeSort(arr, mid+1, e);//Right Sort

    merge(arr, s, e);
}


int main(){
    int arr[5] = {3,4,5,1,2};
    int n =5;
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";

    }
    

return 0;
}