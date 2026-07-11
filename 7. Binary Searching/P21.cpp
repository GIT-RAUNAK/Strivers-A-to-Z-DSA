// Kth Missing Positive Number

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int findKthPositive(vector<int>& arr, int k) {
    int n=arr.size();
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        int missing = arr[mid] - (mid+1);
        if(missing<k) low=mid+1;
        else high=mid-1;
    }
    return low+k;
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
    int k;
    cout<<"Enter threshold value:\n";
    cin>>k;
    cout<<"The missing positive integer is: "<<findKthPositive(arr,k);
}