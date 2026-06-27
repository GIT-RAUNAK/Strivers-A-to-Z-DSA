// Minimum in Rotated Sorted Array

#include<iostream>
using namespace std;
#include<vector>

int findMin(vector<int>& nums) {
    int n=nums.size();
    int low=0, high=n-1;
    while(low<high){
        int mid=low+(high-low)/2;
        if(nums[mid]<nums[high]){
            high=mid;
        }
        else if(nums[mid]>nums[high]){
            low=mid+1;
        }
        else{
            high--;
        }
    }
    return nums[low];
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
    cout<<"Minimum element is: "<<findMin(arr);
}