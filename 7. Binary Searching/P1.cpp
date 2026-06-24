// SIMPLE Binary Search

#include<iostream>
using namespace std;
#include<vector>

int search(vector<int>& nums, int target) {
    int n = nums.size();
    int low=0,high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==target) return mid;
        else if(nums[mid]>target) high=mid-1;
        else low=mid+1;
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