// Floor in a Sorted Array

#include<iostream>
using namespace std;
#include<vector>

int findFloor(vector<int>& arr, int x) {
    int n=arr.size();
    int low=0,high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]<=x){
            ans=mid;
            low=mid+1;
        }
        else if(arr[mid]>x){
            high=mid-1;
        }
    }
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
    cout<<"Target element is at position: "<<findFloor(arr,target);
}