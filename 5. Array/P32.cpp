// Majority Element (n/3) - Optimal Approach - Boyer-Moore Voting Algorithm 

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

vector<int> majorityElement(vector<int>& nums) {
    int n=nums.size();
    int cnt1=0,cnt2=0;
    int ele1=-1,ele2=-1;
    for(int i=0;i<n;i++){
        if(cnt1==0 && nums[i]!=ele2){
            cnt1=1;
            ele1=nums[i];
        }
        else if(cnt2==0 && nums[i]!=ele1){
            cnt2=1;
            ele2=nums[i];
        }
         else if(nums[i]==ele1) cnt1++;
        else if(nums[i]==ele2) cnt2++;
        else{
            cnt1--;
            cnt2--;
        }
    }
    int count1=0,count2=0;
    for(int i=0;i<n;i++){
        if(nums[i]==ele1) count1++;
        else if(nums[i]==ele2) count2++;
    }
    vector<int> result;
    if(count1>n/3) result.push_back(ele1);
    if(count2>n/3) result.push_back(ele2);
    sort(result.begin(),result.end());
    return result;
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
    vector<int> ans = majorityElement(arr);
    for(int x: ans){
        cout<<x<<" ";
    }
}
    