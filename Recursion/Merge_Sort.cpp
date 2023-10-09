#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void merge(int *arr, int s, int e){
    int mid = (s+e)/2;
    
    int len1 = mid - s + 1; // Length of array one after seperation 
    int len2 = e - mid; // length of array two after seperation 
    
    int *first = new int[len1];
    int *second = new int[len2];

    //Copy values in first and second array
    int mainarrayIndex = s; // k is the first index of main array 
    for(int i = 0;i<len1;i++){
        first[i] =arr[mainarrayIndex++];
    }
    mainarrayIndex = mid+1;
    for(int i =0; i<len2;i++){
        second[i]= arr[mainarrayIndex++];
    }

    //Merge the sorted arrays
    int index1 =0;
    int index2 =0;
    mainarrayIndex = s;

    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[mainarrayIndex++] = first[index1++];
        }
        else{
            arr[mainarrayIndex++] = second[index2++];
        }

        while(index1<len1){
            arr[mainarrayIndex++] = first[index1++];
        }

        while(index2<len2){
            arr[mainarrayIndex++]= second[index2++];
        }
    }
}
// Merge Sort Algo

void mergeSort(int *arr, int s, int e){
    //Base Case
    if(s>=e)
        return;
    
    int mid= (s +e)/2;

    mergeSort(arr, s, mid);// Left Sort

    mergeSort(arr, mid+1, e);//Right Sort

    merge(arr, s, e);
}


int main(){
    int arr[10] = {3,4,5,1,8,9,90,7,88,98};
    int n =10;
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
    

return 0;
}