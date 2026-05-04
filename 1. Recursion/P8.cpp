// Factorial of n

#include<iostream>
using namespace std;

int calc(int n){
    if(n==1) return 1;
    return n * calc(n-1);
}

int main(){
    int n;
    cout<<"Enter a number whose factorial is to be found:\n";
    cin>>n;
    cout<<calc(n);
}