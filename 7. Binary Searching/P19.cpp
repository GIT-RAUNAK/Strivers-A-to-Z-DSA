// Find the Smallest Divisor Given a Threshold

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int smallestDivisor(vector<int>& nums, int threshold) {
    int n = nums.size();
    int low=1;
    int high=*max_element(nums.begin(),nums.end());
    int ans=0;
    while(low<=high){
        int mid=low+(high-low)/2;
        int result=0;
        for(int x : nums){
            if(x%mid==0) result+=(x/mid);
            else result+=(x/mid+1);
        }
        if(result>threshold){
            low=mid+1;
        }
        else{
            ans=mid;
            high=mid-1;
        }
    }
    return ans;
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
    int k;
    cout<<"Enter threshold value:\n";
    cin>>k;
    cout<<"The smallest divisor such that the result is less than or equal to threshold is: " <<smallestDivisor(arr,k);
}