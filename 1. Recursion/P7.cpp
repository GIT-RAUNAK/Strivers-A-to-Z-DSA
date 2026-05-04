// Sum of first n numbers (Functional)

#include<iostream>
using namespace std;

int calc(int n){
    if(n==0) return 0;
    return n+calc(n-1);
}

int main(){
    int n;
    cout<<"Enter nth numbers: ";
    cin>>n;
    cout<<calc(n);
}