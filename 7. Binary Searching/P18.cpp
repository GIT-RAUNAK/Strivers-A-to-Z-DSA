// Minimum days to make M bouquets

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int minDaysBloom(vector<int>& arr, int k, int m) {
    int low = *min_element(arr.begin(),arr.end());
    int high = *max_element(arr.begin(),arr.end());
    if(arr.size()<(long long)m*k) return -1;
    int days=0;
    while(low<=high){
        int mid=low+(high-low)/2;
        int count=0;
        int totalBouquet=0;
        for(int x : arr){
            if(x<=mid){
                count++;
                if(count==k){
                    totalBouquet++;
                    count=0;
                }
            }
            else{
                count=0;
            }
        }
        if(totalBouquet>=m){
            days=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return days;
}

int main(){
    int n;
    cout<<"Enter total number of flowers:\n";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter each flowers blooming period:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k,m;
    cout<<"Enter total number of bouquet to be created:\n";
    cin>>m;
    cout<<"Enter total number of flower in each bouquet:\n";
    cin>>k;
    cout<<"Total number of days required to make the bouquets are: " <<minDaysBloom(arr,k,m);
}