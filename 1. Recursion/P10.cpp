// Check Palindrome

#include<iostream>
using namespace std;

bool call(int arr[], int i, int n){
    if(i>=n/2) return true;
    if(arr[i]!=arr[n]) return false;
    return call(arr, i+1,n-1);
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
    cout<<boolalpha<<(call(arr,0, n-1));
}