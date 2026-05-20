// Number that appears once

#include<iostream>
using namespace std;
#include<vector>

int singleNumber(vector<int>& arr) {
    int xorr=0;
    for(int i=0;i<arr.size();i++){
        xorr=xorr^arr[i];
    }
    return xorr;
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
    cout<<singleNumber(arr);
}