// Print from n to 1

#include<iostream>
using namespace std;

void call(int n){
    if(n==0) return;
    cout<<n<<endl;
    call(--n);
}

int main(){
    int n;
    cout<<"Enter the starting number:"<<endl;
    cin>>n;
    call(n);
}