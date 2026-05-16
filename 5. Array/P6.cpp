// Right Rotate an Array by kth place - BRUTE

#include<iostream>
using namespace std;
#include<vector>

int LeftRotate(vector<int>& arr, int k){
    int n = arr.size();
    int temp=-1;
    while(k>0){
        temp=arr[n-1];
        for(int i=n-1;i>=0;i--){
            arr[i]=arr[i-1];
        }
        arr[0]=temp;
        k--;
    }
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