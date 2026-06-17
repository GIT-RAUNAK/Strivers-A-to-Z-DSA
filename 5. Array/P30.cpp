#include<iostream>
using namespace std;
#include<vector>
#include<climits>
#include<unordered_map>

int cntSubarrays(vector<int> &nums, int k) {
    unordered_map<long long, int> mpp;
    mpp[0]=1;
    long long sum=0;
    long long count=0;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        long long rem=sum-k;
        if(mpp.find(rem)!=mpp.end()){
            count+=mpp[rem];
        }
        mpp[sum]++;
    }
    return count;
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
    int count = cntSubarrays(arr,k);
    cout<<endl<<count;
}