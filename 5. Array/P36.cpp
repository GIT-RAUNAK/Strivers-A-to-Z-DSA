//4-SUM PROBLEM - OPTIMAL APPROACH

#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include<set>
#include<algorithm>

vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> ans;
        
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            
            for (int j = i + 1; j < n; j++) {
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;
                
                int k = j + 1;
                int l = n - 1;
                
                while (k < l) {
                    long long sum = (long long)nums[i] + nums[j] + nums[k] + nums[l];
                    
                    if (sum == target) {
                        ans.push_back({nums[i], nums[j], nums[k], nums[l]});
                        
                        while (k < l && nums[k] == nums[k + 1]) k++;
                        while (k < l && nums[l] == nums[l - 1]) l--;
                        
                        k++;
                        l--;
                    }
                    else if (sum > target) {
                        l--;
                    }
                    else {
                        k++;
                    }
                }
            }
        }
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