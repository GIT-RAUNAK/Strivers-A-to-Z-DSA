// Intersection of Two Sorted Arrays

#include<iostream>
using namespace std;
#include<vector>

void IntersectionArray(vector<int> &arr1, vector<int> &arr2, vector<int> &Intersection){
    int i=0,j=0;
    while(i<arr1.size() && j<arr2.size()){
        if (arr1[i] < arr2[j]) {
            i++;
        }
        else if (arr1[i] > arr2[j]) {
            j++;
        }
        else {
            if (Intersection.empty() || Intersection.back() != arr1[i]) {
                    Intersection.push_back(arr1[i]);
            }
            i++;
            j++;
        }
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
    vector<int> Intersection;
    IntersectionArray(arr1,arr2,Intersection);
    for(int x:Intersection){
        cout<<x<<" ";
    }
}