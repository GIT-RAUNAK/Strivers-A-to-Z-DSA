// Find the Nth root of a number using binary search

#include<iostream>
using namespace std;
#include<vector>

int nthRoot(int n, int m) {
    int low = 0;
    int high = m;
    while(low<=high){
        long long mid=low+(high-low)/2;
        long long nth = 1;
        for(int i=0;i<n;i++){
            nth*=mid;
        }
        if(nth==m) return mid;
        else if(nth<m){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}

int main(){
    int n,m;
    cout<<"Enter a number:\n";
    cin>>m;
    cout<<"Enter the nth Root to be found:\n";
    cin>>n;
    cout<<"The nth root of the number is " <<nthRoot(n,m);
}