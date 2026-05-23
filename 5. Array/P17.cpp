//Two Sum

#include<iostream>
using namespace std;
#include<vector>
#include<map>

vector<int> twoSum(vector<int> &arr, int target){
    map<int,int> mpp;
    for(int i=0;i<arr.size();i++){
        int val=arr[i];
        int req=target-val;
        if(mpp.find(req)!=mpp.end()){
            int j=mpp[req];
            return {j,i};
        }
        mpp[val]=i;
    }
    return{};
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
    cout<<"Enter target element:\n";
    cin>>k;
    vector<int> result = twoSum(arr,k);
    for(auto x:result){
        cout<<x<<" ";
    }
}