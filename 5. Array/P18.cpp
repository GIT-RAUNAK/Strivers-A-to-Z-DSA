// Sort an array of 0's 1's and 2's --> DUTCH NATIONAL FLAG ALGO

#include<iostream>
using namespace std;
#include<vector>

void sortColors(vector<int>& arr) {
    int first=0,last=arr.size()-1;
    int i=0;
    while(i<=last){
        if(arr[i]==0){
            swap(arr[i],arr[first]);
            first++;
            i++;
        }
        else if(arr[i]==2){
            swap(arr[i],arr[last]);
        last--;
        }
        else{
            i++;
        }
    }
}

int main(){
    int n,k;
    cout<<"Enter size of the array:\n";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter element in the array:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sortColors(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}