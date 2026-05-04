// Backtrack: Print from n to 1

#include<iostream>
using namespace std;

void call(int i,int n){
    if(i>n) return;
    call(i+1,n);
    cout<<i<<endl;
}

int main(){
    int n;
    cout<<"Enter the starting number:"<<endl;
    cin>>n;
    call(1,n);
}