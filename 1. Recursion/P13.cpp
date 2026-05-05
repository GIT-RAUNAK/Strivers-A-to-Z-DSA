// Recursion on Subsequences

#include<bits/stdc++.h>
using namespace std;

int n;

void display(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<",";
    }
}

void Subsequences(int i,vector<int>& arr, vector<int>& arr2){
    if(i==n){
        display(arr2);
        cout<<endl;
        return;
    }
    arr2.push_back(arr[i]);
    Subsequences(i+1, arr, arr2);
    arr2.pop_back();
    Subsequences(i+1, arr, arr2);
}

int main(){
    cout<<"Enter the size of array:\n";
    cin>>n;
    vector<int> arr(n);
    vector<int> arr2;
    cout<<"Enter the value in the array:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Subsequences(0,arr,arr2);
}