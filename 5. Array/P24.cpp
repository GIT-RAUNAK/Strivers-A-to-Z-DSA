// Leaders in an Array

#include<iostream>
using namespace std;
#include<vector>
#include<climits>
#include<algorithm>

vector<int> leaders(vector<int>& arr) {
        int n = arr.size();
        vector<int>ans;
        int maxi=INT_MIN;
        for(int i=n-1;i>=0;i--){
            if(arr[i]>=maxi){
                ans.push_back(arr[i]);
                maxi=arr[i];
            }
        }
        reverse(ans.begin(),ans.end());
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
    vector<int> ans = leaders(arr);
    cout<<"Leaders in the array are:\n";
    for(auto x: ans){
        cout<<x<<" ";
    }
}