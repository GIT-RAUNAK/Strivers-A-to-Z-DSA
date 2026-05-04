// Print Linearly 1 to n

#include<iostream>
using namespace std;

int i=1;

void call(int n){
    if(i>n) return;
    cout<<i<<endl;
    i++;
    call(n);
}

int main(){
    int n;
    cout<<"Enter the last number:\n";
    cin>>n;
    call(n);
}