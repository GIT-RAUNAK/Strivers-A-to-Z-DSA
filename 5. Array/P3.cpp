// Array is Sorted or not??

#include<iostream>
using namespace std;
#include<vector>
#include<climits>

bool Sorted(vector<int> &arr){
    bool isSort=1;
    for(int i=1;i<arr.size()-1;i++){
        if(arr[i]>=arr[i-1] && arr[i]<=arr[i+1]) continue;
        else {
            isSort=0;
        }
    }
    return isSort;
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
    cout<<Sorted(arr);
}