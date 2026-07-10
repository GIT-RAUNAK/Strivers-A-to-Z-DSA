// Single Element in a Sorted Array

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int kokoEat(vector<int>& arr, int k) {
    // Code here
    int low = 1;
    int high = *max_element(arr.begin(),arr.end());
    int ans = 0;
    while(low<=high){
        int mid= low+(high-low)/2;
        long long totalHours = 0;
        for(int pile : arr){
            totalHours+=(pile + mid-1)/mid;
        }
        if(totalHours <= k){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter total pile of bananas:\n";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter number of banana in each piles:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter total hours Koko has to eat all bananas:\n";
    cin>>k;
    cout<<"Minimum time taken by Koko to eat all the bananas is: " <<kokoEat(arr,k);
}