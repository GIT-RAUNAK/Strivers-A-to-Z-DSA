// Find Elements at a position in PASCAL'S TREE

#include<iostream>
using namespace std;
#include<vector>

int elementat(int rows, int cols){
    long long result=1;
    for(int i=0;i<cols;i++){
        result*=(rows-i);
        result/=(i+1);
    }
    return result;
}

int main(){
    int rows,cols;
    cout<<"Enter Row:\n";
    cin>>rows;
    cout<<"Enter Colums:\n";
    cin>>cols;
    long long ans=elementat(rows-1,cols-1);
    cout<<ans;
}