// The Painter's Partition Problem

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

bool canPaint(vector<int>& arr, int mid, int k){
    int countPainters=1;
    int paintedLength=arr[0];
    for(int i=1;i<arr.size();i++){
        paintedLength+=arr[i];
        if(paintedLength>mid){
            countPainters++;
            paintedLength=arr[i];
        }
    }
    if(countPainters<=k) return true;
    else return false;
}

int minTime(vector<int> &arr, int k){
    int n=arr.size();
    int low=*max_element(arr.begin(),arr.end());
    int high=0;
    for(int x : arr) high+=x;
    int val=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(canPaint(arr, mid, k)){
            val=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return val;
}

int main(){
    int n;
    cout<<"Enter the size of the array:\n";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter elements in the array:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter toal number of required subarrays:\n";
    cin>>k;
    cout<<"The minimum larget sum is: "<<minTime(arr,k);
}