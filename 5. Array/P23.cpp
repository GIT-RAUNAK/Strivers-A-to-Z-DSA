// Next Permutation

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#include<vector>

void nextPermutation(vector<int>& nums) {
    next_permutation(nums.begin(),nums.end());
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
    nextPermutation(arr);
    for(int x:arr){
        cout<<x<<" ";
    }
}