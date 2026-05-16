// Right Rotate an Array by kth place - OPTIMAL

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int LeftRotate(vector<int>& arr, int k){
    int n=arr.size();
    k=k%n;
    reverse(arr.begin(),arr.begin()+(n-k));
    reverse(arr.begin()+(n-k), arr.end());
    reverse(arr.begin(),arr.end());
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
    LeftRotate(arr,3);
    cout<<"Rotated Array is:\n";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}