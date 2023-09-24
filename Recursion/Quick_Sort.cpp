#include<iostream>
using namespace std;

int partition(int *arr, int s, int e){
    int pivot = arr[s];

    int count =0; // To count the elements smaller than pivot

    for(int i =s+1;i<=e;i++){
        if(arr[i]<=pivot)
            count++;
    }
    //Pivot Index placed
    int pivotIndex = s+count;
    swap(arr[s],arr[pivotIndex]);

    //Left and right adjustment 

    int i =s, j = e;
    while(i<=pivotIndex &&j>=pivotIndex){
        while(arr[i]<pivot)
            i++;
        while(arr[j]>pivot)
            j--;
        if(i<=pivotIndex &&j>=pivotIndex){
            swap(arr[i],arr[j]);
            i++;
            j++;
        }
    }
    return pivotIndex;

}

void quickSort(int *arr, int s, int e){
    //Base Case
    if(s>e)
        return;
    
    // Partition
    int p = partition(arr, s, e);

    //Left sort
    quickSort(arr, s,p-1);

    //Right Sort
    quickSort(arr, p+1,e);

}

int main(){
    int arr[5] = {3,4,3,7,7};
    int n = 5;

    quickSort(arr,0,n-1);
    for(int i= 0;i<n;i++){
        cout<<arr[i]<<" ";
    }

return 0;
}