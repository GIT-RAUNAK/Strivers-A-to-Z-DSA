// Aggressive Cows

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

bool canWePlace(vector<int> &arr, int dis, int k){
    int countCows = 1;
    int lastPosition = arr[0];
    for(int i=1;i<arr.size();i++){
        if(arr[i]-lastPosition>=dis){
            countCows++;
            lastPosition=arr[i];
        }
    }
    if(countCows>=k) return true;
    else return false;
}

int maxDistance(vector<int> &arr, int k){
    int n=arr.size();
    int low=1;
    int high=arr[n-1]-arr[0];
    int val=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(canWePlace(arr, mid, k)){
            val=mid;
            low=mid+1;
        }
        else high=mid-1;
    }
    return val;
}

int main(){
    int n;
    cout<<"Enter the number of stalls:\n";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter position of each stalls:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter toal number of cows:\n";
    cin>>k;
    cout<<"the minimum distance between any two cows is: "<<maxDistance(arr,k);
}