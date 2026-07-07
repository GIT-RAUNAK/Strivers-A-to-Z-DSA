// Find Peak Element

#include<iostream>
using namespace std;
#include<vector>

int findPeakElement(vector<int>& arr) {
    int n=arr.size();
    if(n==1) return 0;
    if(arr[0]>arr[1]) return 0;
    if(arr[n-1]>arr[n-2]) return n-1;
    int index=-1;
    int low=1, high=n-2;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
            index=mid;
            break;
        }
        else if(arr[mid]>arr[mid-1]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return index;
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
    cout<<"Peak Element in the array is " <<arr[findPeakElement(arr)];
}