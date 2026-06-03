// Spiral Matrix

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#include<vector>

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int rows=matrix.size();
    int cols=matrix[0].size();
    int total=rows*cols;
    vector<int> result;
    int i=0,j=0;
    int min_row=0,min_col=0;
    int max_rows=rows-1,max_cols=cols-1;
    while(total){
        while(j<=max_cols && total>0){
            result.push_back(matrix[i][j]);
            j++;
            total--;
        }   
        j--;
        min_row++;
        i=min_row;
        while(i<=max_rows && total>0){
            result.push_back(matrix[i][j]);
            i++;
            total--;
        }
        i--;
        max_cols--;
        j=max_cols;
        while(j>=min_col && total>0){
            result.push_back(matrix[i][j]);
            j--;
            total--;
        }
        j++;
        max_rows--;
        i=max_rows;
        while(i>=min_row && total>0){
            result.push_back(matrix[i][j]);
            i--;
            total--;
        }
        i++;
        min_col++;
        j=min_col;
    }
    return result;
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
    vector<int> result = spiralOrder(matrix);
    cout<<"Resultant Matrix is:\n";
    for(int x: result){
        cout<<x<<" ";
    }
}