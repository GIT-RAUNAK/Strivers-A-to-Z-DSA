// Linear Search

#include<iostream>
using namespace std;
#include<vector>

int LinearSearch(vector<int>&arr, int k){
    int result=-1;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==k){
            result=i;
            break;
        } 
    }
    return result;
}

int main(){
    int n,k;
    cout<<"Enter size of the array:\n";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter element in the array:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter element to be found:\n";
    cin>>k;
    cout<<LinearSearch(arr,k);
}