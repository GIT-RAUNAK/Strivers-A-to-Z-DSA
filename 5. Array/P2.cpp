// Second Largest Element in the Array

#include<iostream>
using namespace std;
#include<vector>
#include<climits>

int findSecondLargest(vector<int> &arr){
    int max=arr[0];
    for(int i=0;i<arr.size();i++){
        if(arr[i]>max) max=arr[i];
    }
    int sec_max=-1;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>sec_max && arr[i]!=max) sec_max=arr[i];
    }
    return sec_max;
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
    cout<<"Second largest element is: "<<findSecondLargest(arr);
}