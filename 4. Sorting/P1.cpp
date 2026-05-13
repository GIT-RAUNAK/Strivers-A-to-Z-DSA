// Selection Sort

#include<iostream>
using namespace std;
#include<vector>

int main(){
    int n;
    cout<<"Enter the size of array:\n";
    cin>>n;
    vector<int> arr(n,0);
    cout<<"Enter the elements in the array:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        int index=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[index]){
                index=j;
            }
        }
        swap(arr[i],arr[index]);
    }
    cout<<"Sorted array is:\n";
    for(int x: arr){
        cout<<x<<" ";
    }
}