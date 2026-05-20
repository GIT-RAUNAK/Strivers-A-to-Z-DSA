// Union of Two Sorted Arrays

#include<iostream>
using namespace std;
#include<vector>

void UnionArray(vector<int> &arr1, vector<int> &arr2, vector<int> &Union){
    int i = 0, j = 0;
        
        while (i < arr1.size() && j < arr2.size()) {
            if (arr1[i] < arr2[j]) {
                if (Union.empty() || Union.back() != arr1[i]) {
                    Union.push_back(arr1[i]);
                }
                i++;
            }
            else if (arr1[i] > arr2[j]) {
                if (Union.empty() || Union.back() != arr2[j]) {
                    Union.push_back(arr2[j]);
                }
                j++;
            }
            else {
                if (Union.empty() || Union.back() != arr1[i]) {
                    Union.push_back(arr1[i]);
                }
                i++;
                j++;
            }
        }
        
    while (i < arr1.size()) {
        if (Union.empty() || Union.back() != arr1[i]) {
            Union.push_back(arr1[i]);
        }
        i++;
    }
    while (j < arr2.size()) {
        if (Union.empty() || Union.back() != arr2[j]) {
            Union.push_back(arr2[j]);
        }
        j++;
    }
}

int main(){
    int n1,n2;
    cout<<"Enter size of the array 1:\n";
    cin>>n1;
    vector<int> arr1(n1);
    cout<<"Enter element in the array 1:\n";
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    cout<<"Enter size of the array 2:\n";
    cin>>n2;
    vector<int> arr2(n2);
    cout<<"Enter element in the array 2:\n";
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    vector<int> Union;
    UnionArray(arr1,arr2,Union);
    for(int x:Union){
        cout<<x<<" ";
    }
}