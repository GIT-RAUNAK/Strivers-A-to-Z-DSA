// Print the count of the subsequences whose sum is k

#include<iostream>
#include<vector>
using namespace std;

int Subsequence(int i, int n, int sum, vector<int> &arr, int k){
    if(i == n){
        return (sum == k) ? 1 : 0;
    }
    int include = Subsequence(i+1, n, sum+arr[i], arr, k);
    int exclude = Subsequence(i+1, n, sum,        arr, k);
    return include + exclude;
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
    cout << Subsequence(0, n, 0, arr, k);
}