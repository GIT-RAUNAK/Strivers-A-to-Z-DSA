//3-SUM PROBLEM - OPTIMAL APPROACH

#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include<set>
#include<algorithm>

vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>> st;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            int j=i+1, k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==0){
                    vector<int> temp = {nums[i],nums[j],nums[k]};
                    st.insert(temp);
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1]) j++;
                    while(j<k && nums[j]==nums[k+1]) k--;
                }
                else if(sum>0) k--;
                else j++;
            }
        }
        vector<vector<int>> ans(st.begin(),st.end());
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
    vector<vector<int>> ans = threeSum(arr);
    for (auto triplet : ans) {
    cout << "[ ";
    for (int num : triplet) {
        cout << num << " ";
    }
    cout << "] ";
    }
}