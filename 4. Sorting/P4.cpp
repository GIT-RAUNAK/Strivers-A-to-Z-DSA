// Merge Sort

#include<iostream>
using namespace std;
#include<vector>

void Merge(vector<int> &arr, int low, int mid, int high){
    int left=low, right=mid+1;
    vector<int> arr2;
    while(left<=mid && right<=high){
        if(arr[left]<arr[right]){
            arr2.push_back(arr[left]);
            left++;
        }
        else{
            arr2.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        arr2.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        arr2.push_back(arr[right]);
        right++;    
    }
    for(int i=low;i<=high;i++){
        arr[i]=arr2[i-low];
    }
}

void MergeSort(vector<int> &arr , int low, int high){
    if(low>=high) return;
    int mid = (low+high)/2;
    MergeSort(arr, low, mid);
    MergeSort(arr, mid+1, high);
    Merge(arr,low,mid,high);
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
    MergeSort(arr,0,n-1);
    cout<<"Sorted array is:\n";
    for(int x: arr){
        cout<<x<<" ";
    }
}