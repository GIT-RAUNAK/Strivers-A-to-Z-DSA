// Longest Subarray with Sum K for both Positive and Negative

#include<iostream>
using namespace std;
#include<vector>
#include<climits>
#include<map>

int longestSunarray(vector<int> &arr,int k){
    map<long long,int> mpp;
    long long sum=0;
    int maxLen=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        if(sum==k) maxLen=max(maxLen,i+1);
        long long rem=sum-k;
        if(mpp.find(rem)!=mpp.end()){
            int len=i-mpp[rem];
            maxLen=max(maxLen,len);
        }
        if(mpp.find(sum)==mpp.end()) mpp[sum]=i;
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