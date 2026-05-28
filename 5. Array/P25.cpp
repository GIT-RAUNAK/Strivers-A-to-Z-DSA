// Next Permutation

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#include<vector>

int longestConsecutive(vector<int>& nums) {
    int n=nums.size();
    if(n==0) return 0;
    sort(nums.begin(),nums.end());
    int count=0, longest=1;
    int smallest=INT_MIN;
    for(int i=0;i<n;i++){
        if((nums[i]-1)==smallest){
            count++;
            smallest=nums[i];
        }
         else if(nums[i]>smallest){
            count=1;
            smallest=nums[i];
        }
        longest=max(longest,count);
    }
    return longest;
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
    cout<< longestConsecutive(arr);
}