// Capacity To Ship Packages Within D Days

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int shipwithindays(vector<int> weights, int days){
    int n = weights.size();
    int low=*max_element(weights.begin(),weights.end());
    int high=0;
    for(int x:weights){
        high+=x;
    }
    while(low<=high){
        int mid=low+(high-low)/2;
        int totalDays=1;
        int sum=0;
        for(int x : weights){
            if(sum+x>mid){
                totalDays++;
                sum=0;
            }
            sum+=x;
        }
        if(totalDays>days) low=mid+1;
        else high=mid-1;
    }
    return low;
}

int main(){
    int n;
    cout<<"Enter the number of packages:\n";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter weight of each package:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter required completion days:\n";
    cin>>k;
    cout<<"The least weight capacity of the ship that will result in all the packages on the conveyor belt being shipped within "<<k<<" days is "<<shipwithindays(arr,k);
}