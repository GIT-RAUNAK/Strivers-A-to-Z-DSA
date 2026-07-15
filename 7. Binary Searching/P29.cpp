// Row with Max 1s in Rowwise Sorted

#include<iostream>
using namespace std;
#include<vector>

int rowWithMax1s(vector<vector<int>> &arr) {
    int rows=arr.size();
    int cols=arr[0].size();
    int index=-1;
    int count=0;
    for(int i=0;i<rows;i++){
        int low=0,high=cols-1,val=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[i][mid]<1) low=mid+1;
            else{
                val=cols-mid;
                high=mid-1;
            }
        }
        if(val>count){
            count=val;
            index=i;
        }
    }
    return index;
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
    cout<<"Row with maximum number of 1's is: "<<rowWithMax1s(mat)+1;
    return 0;
}