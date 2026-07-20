// FIND PEAK ELEMENT IN MATRIX

#include<iostream>
using namespace std;
#include<vector>

vector<int> findPeak(vector<vector<int>>&mat){
    int rows=mat.size();
    int cols=mat[0].size();
    int low=0, high=cols-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        int maxi=mat[0][mid];
        int maxRows=0;
        for(int i=0;i<rows;i++){
            if(mat[i][mid]>maxi){
                maxRows=i;
                maxi=mat[maxRows][mid];
            }
        }

        int leftValue = (mid-1>=0) ? (mat[maxRows][mid-1]):-1;
        int rightValue = (mid+1<cols) ? (mat[maxRows][mid+1]):-1;

        if(mat[maxRows][mid]>leftValue && mat[maxRows][mid]>rightValue)  return {maxRows,mid};
        else if(mat[maxRows][mid]<rightValue) low=mid+1;
        else high=mid-1;
    }
    return {-1,-1};
}

int main(){
    int n1,n2;
    cout<<"Enter the size of row:\n";
    cin>>n1;
    cout<<"Enter the size of column:\n";
    cin>>n2;
    vector<vector<int>> mat(n1, vector<int>(n2));
    cout<<"Enter the elements in the matrix:\n";
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            cin>>mat[i][j];
        }
    }
    vector<int> result = findPeak(mat);
    for(int x: result) cout<<x<<" ";
    return 0;
}