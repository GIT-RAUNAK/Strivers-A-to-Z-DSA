// Majority Element - Better Approach

#include<iostream>
using namespace std;
#include<vector>
#include<unordered_map>

int majorityElement(vector<int>& nums) {
    int req=nums.size()/2;
    int val=-1;
    unordered_map<int,int> mpp;
    for(int i=0;i<nums.size();i++){
        mpp[nums[i]]++;
    }
    for(auto it:mpp){
        if(it.second>req){
            val=it.first;
            break;
        }
    }
    return val;
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
    cout<<majorityElement(arr);
}
    