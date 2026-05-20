// Missing Number in an Array

#include<iostream>
using namespace std;
#include<vector>

int findMissing(vector<int> &arr){
    long long n = arr.size()+1;
    long long total = (n * (n + 1)) / 2;
    long long sum = 0;
    
    for (int num : arr) {
        sum += num;
    }
        
    return total - sum;
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
    cout<<findMissing(arr);
}