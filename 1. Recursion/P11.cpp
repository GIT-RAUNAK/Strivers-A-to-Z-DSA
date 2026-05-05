// nth Position Fibonacci Number

#include<iostream>
using namespace std;

int Fibonacci(int n){
    if(n<=1) return n;
    int last=Fibonacci(n-1);
    int s_last=Fibonacci(n-2);
    return last+s_last;
}

int main(){
    int n;
    cout<<"Enter the position:";
    cin>>n;
    cout<<Fibonacci(n-1);
}