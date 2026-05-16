// Remove Duplicates without using Set in a Sorted Array

#include<iostream>
using namespace std;
#include<vector>

int RemoveDuplicates(vector<int>& arr){
    int i=0, j=i+1;
    while(j<arr.size()){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
        j++;
    }
    return i+1;
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
    int count=RemoveDuplicates(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<count;
}