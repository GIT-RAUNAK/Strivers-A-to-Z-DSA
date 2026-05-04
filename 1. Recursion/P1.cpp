// Print Name n Times
#include<iostream>
using namespace std;

void call(int i, int j){
    if(i>j) return;
    cout<<"Raunak Raj";
    cout<<endl;
    call(i+1,j);
}

int main(){
    int n;
    cout<<"Enter the number of times:";
    cin>>n;
    call(1,n);
}