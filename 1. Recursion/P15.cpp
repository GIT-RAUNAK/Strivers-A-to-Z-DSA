// Printing the first subsequence whose sum is k

#include<bits/stdc++.h>
using namespace std;

void display(vector<int>& arr){
    for(int x : arr){
        cout<<x<<",";
    }
}

bool Subsequence(int i, int n, int sum, vector<int> &arr, vector<int> &arr2, int k){
    if(i==n){
        if(sum==k){
            display(arr2);
            return true;
        }
        return false;
    }
    arr2.push_back(arr[i]);
    if(Subsequence(i+1, n, sum+arr[i], arr, arr2, k)==true) return true;
    arr2.pop_back();
    if(Subsequence(i+1,n,sum,arr,arr2,k)==true) return true;
    return false;
}

int main(){
    int n,k;
    cout<<"Enter the size of the array:\n";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter elements in the array:\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the required sum:\n";
    cin>>k;
    vector<int> arr2;
    if (!Subsequence(0, n, 0, arr, arr2, k)) {
    cout << "No subsequence with sum " << k << " found.\n";
    }
}