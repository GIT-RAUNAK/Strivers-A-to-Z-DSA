// Majority Element - Optimal Approach - Boyer-Moore Voting Algorithm 

#include<iostream>
using namespace std;
#include<vector>
#include<unordered_map>

int majorityElement(vector<int>& arr) {
    int count=0;
    int ele=-1;
    for(int i=0;i<arr.size();i++){
        if(count==0){
            count=1;
            ele=arr[i];
        }
        else if(arr[i]==ele) count++;
        else count--;
    }
    int count1=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==ele) count1++;
    }
    if(count1>arr.size()/2) return ele;
    else return -1;
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
    cout<<majorityElement(arr);
}
    