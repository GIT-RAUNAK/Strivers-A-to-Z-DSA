// Longest Subarray with Sum K for Positive integers.

#include<iostream>
using namespace std;
#include<vector>
#include<climits>

int longestSunarray(vector<int> &arr,int k){
    long long sum=0;
    int maxLen=0;
    int j=0,i=0;
    while(j<arr.size()){
        sum+=arr[j];
        while(sum>k && i<=j){
            sum-=arr[i];
            i++;
        }
        if(sum==k){
            maxLen=max(maxLen,j-i+1);
        }
        j++;
    }
    return maxLen;
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
    cout<<"Enter target:\n";
    cin>>k;
    int count = longestSunarray(arr,k);
    cout<<endl<<count;
}