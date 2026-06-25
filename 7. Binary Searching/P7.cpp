// First and Last in Sorted

#include<iostream>
using namespace std;
#include<vector>

vector<int> find(vector<int>& nums, int target) {
    int n=nums.size();
    int low=0, high=n-1;
    int first=-1,last=-1;
    vector<int> ans;
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
    ans.push_back(first);
    

    low=0,high=n-1;
    // SECOND OCCURENCE
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
    ans.push_back(last);

    return ans;
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
    vector<int> result = find(arr,target);
    for(int x:result){
        cout<<x<<" ";
    }
}