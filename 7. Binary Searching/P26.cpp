// Minimize Max Distance to Gas Station

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

bool canbePlaced(vector<int>& arr, double mid, int k){
    int totalGas=0;
    for(int i=1;i<arr.size();i++){
        double gap = arr[i]-arr[i-1];
        totalGas+=(int)(gap/mid);
    }
    if(totalGas<=k) return true;
    else return false;
}

double minMaxDis(vector<int>& arr, int k){
    int n=arr.size();
    double low=0;
    double high=arr[n-1]-arr[0];
    while(high-low>1e-6){
        double mid = low+(high-low)/2.0;
        if(canbePlaced(arr,mid,k)) high=mid;
        else low=mid;
    }
    return high;
}

int main(){
    int n;
    cout<<"Enter number of gas stations:\n";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter positions of each gas stations:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter toal number of gas stations need to be added:\n";
    cin>>k;
    cout<<"The maximum distance between adjacent gas stations after adding is: "<<minMaxDis(arr,k);
}