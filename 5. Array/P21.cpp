// Maximum Subarray Sum - Optimal Approach - Kadan's Algorithm

#include<iostream>
using namespace std;
#include<vector>
#include<climits>

int maxSubArray(vector<int>& nums) {
    int max=INT_MIN;
    int sum=0;
    int i=0;
    while(i<nums.size()){
        if(sum<0) sum=0;
        sum+=nums[i];
        if(sum>max) max=sum;
        i++;
    }
    return max;
}

int main(){
    int n;
    cout<<"Enter size of the array:\n";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter element in the array:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxSubArray(arr);
}
    