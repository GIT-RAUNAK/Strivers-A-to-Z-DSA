// Set Zeroes in a Matrix

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#include<vector>

void setZeroes(vector<vector<int>>& matrix) {
    int r=matrix.size();
    int c=matrix[0].size();
    vector<int> rows(r,0);
    vector<int> cols(c,0);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(matrix[i][j]==0){
                rows[i]=1;
                cols[j]=1;
            }
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(rows[i] || cols[j]){
                matrix[i][j]=0;
            }
        }
    }
}

int main(){
    int n1,n2;
    cout<<"Enter size of the Rows in Matrix:\n";
    cin>>n1;
    cout<<"Enter size of the Columns in Matrix:\n";
    cin>>n2;
    vector<vector<int>> matrix(n1,vector<int>(n2));
    cout<<"Enter element in the matrix:\n";
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
        cin>>matrix[i][j];
       }
    }
    setZeroes(matrix);
    cout<<"Resultant Matrix is:\n";
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
        cout<<matrix[i][j]<<" ";
       }
       cout<<endl;
    }
}