// Search in Rotated Sorted Array

#include<iostream>
using namespace std;
#include<vector>

bool search(vector<int>& nums, int target) {
    int n = nums.size();
    int low=0, high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==target) return true;
        else if(nums[mid]==nums[low] && nums[mid]==nums[high]){
            low++;
            high--;
        }
        else if(nums[mid]>=nums[low]){
            if(target>=nums[low] && target<nums[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(target>nums[mid] && target<=nums[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    return false;
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
    cout<<boolalpha<<search(arr,target);
}