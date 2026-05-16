// Right Rotate an Array by kth place - BRUTE

#include<iostream>
using namespace std;
#include<vector>

int LeftRotate(vector<int>& arr, int k){
    int n=arr.size();
    k=k%n;
    vector<int> temp;
    for(int i=n-k;i<n;i++){
        temp.push_back(arr[i]);
    }
    for(int i=n-k-1;i>=0;i--){
        arr[i+k]=arr[i];
    }
    int j=0;
    for(int i=0;i<n-k-1;i++){
        arr[i]=temp[j];
        j++;
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