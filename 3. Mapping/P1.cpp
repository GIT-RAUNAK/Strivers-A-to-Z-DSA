// Count the Number of elements in the array

#include<iostream>
using namespace std;
#include<vector>
#include<map>

int main(){
    int n;
    cout<<"Enter the size of the array:\n";
    cin>>n;
    vector<int> arr(n);
    map<int,int> mpp;
    cout<<"Enter elements in the array:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mpp[arr[i]]++;
    }
    for(auto it : mpp){
        cout<< it.first << "->" <<it.second<<endl;
    }
}