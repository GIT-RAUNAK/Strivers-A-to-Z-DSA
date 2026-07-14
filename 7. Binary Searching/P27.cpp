// Median of Two Sorted Arrays

#include<iostream>
using namespace std;
#include<vector>

double findMedian(vector<int> &arr1, vector<int> &arr2){
    int totalSize=arr1.size()+arr2.size();
    int i=0,j=0;
    int count=0;
    int ele1=0,ele2=0;
    int index1=totalSize/2;
    int index2=totalSize/2 - 1;
    while(i<arr1.size() && j<arr2.size()){
        if(arr1[i]<arr2[j]){
            if(count==index1) ele1=arr1[i];
            if(count==index2) ele2=arr1[i];
            count++;
            i++;
        }
        else{
            if(count==index1) ele1=arr2[j];
            if(count==index2) ele2=arr2[j];
            count++;
            j++;
        }
    }
    while(i<arr1.size()){
        if(count==index1) ele1=arr1[i];
        if(count==index2) ele2=arr1[i];
        count++;
        i++;
    }
    while(j<arr2.size()){
        if(count==index1) ele1=arr2[j];
        if(count==index2) ele2=arr2[j];
        count++;
        j++;
    }

    if(totalSize%2 !=0) return ele1;
    else return (ele1+ele2)/2.0;
}

int main(){
    int n1,n2;
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
    double median = findMedian(arr1, arr2);
    cout << "The median of the two sorted arrays is: " << median << endl;

    return 0;
}