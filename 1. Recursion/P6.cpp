// Sum of first n numbers (Parameterised)

#include<iostream>
using namespace std;

int sum=0;

void calc(int n){
    if(n==0) return;
    sum+=n;
    calc(n-1);
}

int main(){
    int n;
    cout<<"Enter the nth number: ";
    cin>>n;
    calc(n);
    cout<<sum;
}