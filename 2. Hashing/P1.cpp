// Count the Number of elements in the array

#include<iostream>
using namespace std;
#include<vector>

int max(vector<int> arr){
    int max = 0;
    for(int i=0;i<arr.size(); i++){
        if(arr[i]>max) max=arr[i];
    }
    return max;
}

int main(){
    int n;
    cout<<"Enter the size of the array:\n";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter non-negative elements in the array:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<0){
            cout<<"Number can't be negative"; 
            return 0;
        }
    }
    int maxi = max(arr);
    vector<int> hash(maxi+1);
    for(int i=0; i<arr.size(); i++){
        hash[arr[i]]++;
    }
    int k;
    cout<<"Enter the elements:\n";
    cin>>k;
    if(hash[k]!=0)    cout<<hash[k];
    else cout<<"Number not present in the array.";
    return 0;
}