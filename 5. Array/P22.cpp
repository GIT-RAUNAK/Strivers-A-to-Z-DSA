// Rearrange Array Elements by Sign

#include<iostream>
using namespace std;
#include<vector>

vector<int> rearrangeArray(vector<int>& nums) {
    int n=nums.size();
    vector<int> result(n);
    int pos=0;
    int neg=1;
    for(int i=0;i<n;i++){
        if(nums[i]>0){
            result[pos]=nums[i];
            pos+=2;
        }
        else{
            result[neg]=nums[i];
            neg+=2;
        }
    }
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
    vector<int> ans =rearrangeArray(arr);
    for(int x:ans){
        cout<<x<<" ";
    }
}