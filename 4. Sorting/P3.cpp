// Insertion Sort

#include<iostream>
using namespace std;
#include<vector>

int main(){
    int n;
    cout<<"Enter the size of array:\n";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements in the array:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j] < arr[j - 1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    cout<<"Sorted array is:\n";
    for(int x: arr){
        cout<<x<<" ";
    }
}