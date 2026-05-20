// Max Consecutive Ones

#include<iostream>
using namespace std;
#include<vector>

int maxOne(vector<int> &arr){
    int max=0;
    int count=0;
    int i=0;
    while(i<arr.size()){
        if(arr[i]==1){
            count++;
            if(count>max) max=count;
        }
        else{
            count=0;
        }
        i++;
    }
   return max;
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
    cout<<maxOne(arr);
}