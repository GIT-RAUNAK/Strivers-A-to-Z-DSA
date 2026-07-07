// Single Element in a Sorted Array

#include<iostream>
using namespace std;
#include<vector>

int singleNonDuplicate(vector<int>& arr) {
    int n = arr.size();
    if(n==1) return arr[0];
    if (arr[0] != arr[1]) return arr[0];
    if (arr[n - 1] != arr[n - 2]) return arr[n - 1];
    int value=-1;
    int low=0, high=n-1;
    while(low<=high){
        int mid=low + (high-low)/2;
        if(arr[mid]!=arr[mid+1] && arr[mid]!=arr[mid-1]){
            value=arr[mid];
            break;
        }
        else if(arr[mid]==arr[mid-1]){
            if((mid-1-low)%2==0) low=mid+1;
            else high=mid-2;
        }
        else{
            if((high-mid-1)%2==0) high=mid-1;
            else low=mid+2;
        }
    }
    return value;
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
    cout<<"Sinlge Element in the array is " <<singleNonDuplicate(arr);
}