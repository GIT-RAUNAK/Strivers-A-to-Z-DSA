// Merge Sort

#include<iostream>
using namespace std;
#include<vector>

int Quick(vector<int>&arr, int low, int high){
    int pivot = arr[low];
    int i = low, j= high;
    while(i<j){
        while(arr[i]<=pivot && i<=high) i++;
        while(arr[j]>pivot && j>=low) j--;
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}

void QuickSort(vector<int> &arr, int low, int high){
    if(low<high){
        int Partition_Index = Quick(arr,low,high);
        QuickSort(arr,low,Partition_Index-1);
        QuickSort(arr, Partition_Index+1, high);
    }
}

int main(){
    int n;
    cout<<"Enter the size of array:\n";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements in the array:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    QuickSort(arr,0,n-1);
    cout<<"Sorted array is:\n";
    for(int x: arr){
        cout<<x<<" ";
    }
}