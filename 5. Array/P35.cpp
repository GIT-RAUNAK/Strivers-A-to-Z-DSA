//4-SUM PROBLEM - BETTER APPROACH

#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include<set>
#include<algorithm>

vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        set<vector<int>> st;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                map<long long,int> mpp;
                for(int k=j+1;k<n;k++){
                    long long sum = (long long)nums[i] + (long long)nums[j] + (long long)nums[k];
                    long long val = target - sum;
                    if(mpp.find(val)!=mpp.end()){
                        vector<int> temp = {nums[i],nums[j],nums[k],(int)val};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                    mpp[nums[k]]=1;
                }
            }
        }
        vector<vector<int>> ans(st.begin(),st.end());
        return ans;
    }

int main(){
    int n,target;
    cout<<"Enter size of the array:\n";
    cin>>n;
    cout<<"Enter target sum:\n";
    cin>>target;
    vector<int> arr(n);
    cout<<"Enter element in the array:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<vector<int>> ans = fourSum(arr,target);
    for (auto triplet : ans) {
    cout << "[ ";
    for (int num : triplet) {
        cout << num << " ";
    }
    cout << "] ";
    }
}