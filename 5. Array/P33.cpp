//3-SUM PROBLEM - BETTER APPROACH

#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include<set>
#include<algorithm>

vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        set<vector<int>> st;
        for(int i=0;i<n;i++){
            map<int,int> mpp;
            for(int j=i+1;j<n;j++){
                int val=-(nums[i]+nums[j]);
                if(mpp.find(val)!=mpp.end()){
                    vector<int> temp = {nums[i],nums[j],val};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
                mpp[nums[j]]=1;
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