// Backtrack: Print Linearly from 1 to n

#include<iostream>
using namespace std;

void call(int i,int n){
    if(i<1) return;
    call(i-1,n);
    cout<<i<<endl;
}

int main(){
    int n;
    cout<<"Enter Last number:"<<endl;
    cin>>n;
    call(n,n);
}