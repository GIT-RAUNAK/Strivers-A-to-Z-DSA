// Search in Rotated Sorted Array

#include<iostream>
using namespace std;
#include<vector>

int search(vector<int>& arr, int target) {
    int n=arr.size();
    int low=0, high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[low]<=arr[mid]){
            if(target>=arr[low] && target<arr[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(target>arr[mid] && target<=arr[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    return -1;
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
    int target;
    cout<<"Enter target element:\n";
    cin>>target;
    cout<<"Target element is at position: "<<search(arr,target);
}