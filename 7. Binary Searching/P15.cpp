// Find square root of a number in log n

// Number of times Sorted Array is Rotated

#include<iostream>
using namespace std;
#include<vector>

int mySqrt(int n) {
    int low=0;
    int high=n;
    int ans=0;
    while(low<=high){
        long long mid=low+(high-low)/2;
        long long square = mid*mid;
        if(square==n) return mid;
        else if(square<n){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter a perfect square number:\n";
    cin>>n;
    cout<<"The root of the number is " <<mySqrt(n);
}