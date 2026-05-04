// Reverse an Array

#include<iostream>
using namespace std;

void reverse(int arr[],int n,int i){
    if(i>=n) return;
    int temp=arr[i];
    arr[i]=arr[n];
    arr[n]=temp;
    reverse(arr,n-1,i+1);
}

int main(){
    int n;
    cout<<"Enter the size of the array:\n";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in the array:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(arr,n-1,0);
    cout<<"Reversed Array is:\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }   
}