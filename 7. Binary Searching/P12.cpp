// Number of times Sorted Array is Rotated

#include<iostream>
using namespace std;
#include<vector>

int findKRotation(vector<int> &arr) {
    int n = arr.size();
    
    int minIndex=0;
    int low=0, high=n-1;
    while(low<high){
        int mid = low+(high-low)/2;
        if(arr[mid]<arr[high]){
            high=mid;
        }
        else if(arr[mid]>arr[high]){
            low=mid+1;
        }
        else{
            high--;
        }
    }
    minIndex=low;
    
    return minIndex;
}

int main(){
    int n;
    cout<<"Enter size of the array:\n";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter element in the array:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The array is rotated by " <<findKRotation(arr) <<" times";
}