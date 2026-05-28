// Next Permutation

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#include<vector>

int longestConsecutive(vector<int>& arr) {
    int n=arr.size();
    unordered_set<int> s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    int res=0;
    for(int x:s){
        if(s.find(x-1)==s.end()){
            int len=1;;
            while(s.find(x+1)!=s.end()){
                x=x+1;
                len+=1;
            }
            res=max(res,len);
        }
    }
    return res;
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