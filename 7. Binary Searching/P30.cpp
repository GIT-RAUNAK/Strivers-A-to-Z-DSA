// Search a 2D Matrix

#include<iostream>
using namespace std;
#include<vector>

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int rows=matrix.size();
    int cols=matrix[0].size();
    for(int i=0;i<rows;i++){
        int low=0, high=cols-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(matrix[i][mid]==target) return true;
            else if(matrix[i][mid]<target) low=mid+1;
            else high=mid-1;
        }
    }
    return false;
}

int main(){
    int n1,n2;
    int k;
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
    cout<<"Enter target element:\n";
    cin>>k;
    cout<<searchMatrix(mat,k);
    return 0;
}