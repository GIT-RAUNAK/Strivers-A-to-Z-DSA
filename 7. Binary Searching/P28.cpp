// Median of Two Sorted Arrays

#include<iostream>
using namespace std;
#include<vector>

int kthElement(vector<int> &a, vector<int> &b, int k) {
    int count=0;
    int ele=-1;
    int i=0,j=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            count++;
            if(count==k){
                ele=a[i];
                break;
            }
            i++;
        }
        else{
            count++;
            if(count==k){
                ele=b[j];
                break;
            }
            j++;
        }
    }
    while(i<a.size()){
        count++;
        if(count==k){
            ele=a[i];
            break;
        }
        i++;
    }
    while(j<b.size()){
        count++;
        if(count==k){
                ele=b[j];
                break;
        }
        j++;
    }
    return ele;
}

int main(){
    int n1,n2;
    int k;
    cout<<"Enter the size of array 1:\n";
    cin>>n1;
    vector<int> arr1(n1);
    cout<<"Enter the size of array 2:\n";
    cin>>n2;
    vector<int> arr2(n2);
    cout<<"Enter the elements in the array 1:\n";
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    cout<<"Enter the elements in the array 2:\n";
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    cout<<"Enter position:\n";
    cin>>k;
    double median = kthElement(arr1, arr2,k);
    cout << "The element at position:  " << median << endl;

    return 0;
}