// Remove Duplicates using Set

#include<iostream>
using namespace std;
#include<vector>
#include<climits>
#include<set>

int RemoveDuplicates(vector<int>& arr){
    set<int> st;
    for(int x:arr){
        st.insert(x);
    }
    int i=0;
    for(int num: st){
        arr[i]=num;
        i++;
    }
    return st.size();
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
    int count=RemoveDuplicates(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<count;
}