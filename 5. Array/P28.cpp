// Rotate Matrix by 90deg

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#include<vector>

void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();
        
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
        
    for (int i = 0; i < n; i++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main(){
    int n;
    cout<<"Enter size of the Matrix:\n";
    cin>>n;
    vector<vector<int>> matrix(n,vector<int>(n));
    cout<<"Enter element in the matrix:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        cin>>matrix[i][j];
       }
    }
    rotate(matrix);
    cout<<"Resultant Matrix is:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        cout<<matrix[i][j]<<" ";
       }
       cout<<endl;
    }
}