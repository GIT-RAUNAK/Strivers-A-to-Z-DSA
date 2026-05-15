// Largest Element in the Array

#include<iostream>
using namespace std;
#include<vector>

int findLargest(vector<int> &arr){
    int max=arr[0];
    for(int i=0;i<arr.size();i++){
        if(arr[i]>max) max=arr[i];
    }
    return max;
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
    cout<<"Largest element is: "<<findLargest(arr);
}