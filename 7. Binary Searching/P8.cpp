// Number of occurrence in Sorted Array

#include<iostream>
using namespace std;
#include<vector>

int countFreq(vector<int>& nums, int target) {
    // code here
    int n=nums.size();
    int low=0, high=n-1;
    int first=-1,last=-1;
    
    // FIRST OCCURENCE
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==target){
            first=mid;
            high=mid-1;
        }
        else if(nums[mid]>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    
    // SECOND OCCURENCE
    low=0,high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==target){
            last=mid;
            low=mid+1;
        }
        else if(nums[mid]>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    
    if(first==-1 || last==-1){
        return 0;
    }
    else return last-first + 1;
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
    cout<<"Number of occurence of the elemnet is : "<<countFreq(arr,target);
}