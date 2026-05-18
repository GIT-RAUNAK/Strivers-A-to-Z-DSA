// Move all Zeroes to end

#include<iostream>
using namespace std;
#include<vector>

void ZeroAtEnd(vector<int> &arr){
    // for(int i=0;i<arr.size()-1;i++){
    //     if(arr[i]==0){
    //         for(int j=i+1;j<arr.size();j++){
    //             if(arr[j]!=0){
    //                 swap(arr[i],arr[j]);
    //                 break;
    //             }
    //         }
    //     }
    // }
    int j=-1;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    if(j==-1) return;
    for(int i=j+1;i<arr.size();i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
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
    ZeroAtEnd(arr);
    cout<<"Rotated Array is:\n";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}