// Median in a Row-Wise Sorted Matrix

#include<iostream>
using namespace std;
#include<vector>

int findMedian(vector<vector<int>>& mat){
    int rows = mat.size();
    int cols = mat[0].size();

    int low = mat[0][0], high = mat[0][cols-1];
    for(int i = 0; i < rows; i++){
        if(mat[i][0] < low)
            low = mat[i][0];
        if(mat[i][cols-1] > high)
            high = mat[i][cols-1];
    }

    int required = (rows * cols) / 2;

    while(low < high){
        int mid = low + (high - low) / 2;
        int count = 0;

        for(int i = 0; i < rows; i++){
            int l = 0, h = cols - 1;
            while(l <= h){
                int mid2 = l + (h - l) / 2;
                if(mat[i][mid2] <= mid) l = mid2 + 1;
                else h = mid2 - 1;
            }
            count += l;
        }

        if(count <= required) low = mid + 1;
        else high = mid;
    }

    return low;
}

int main(){
    int n1, n2;
    cout << "Enter the size of row:\n";
    cin >> n1;
    cout << "Enter the size of column:\n";
    cin >> n2;

    vector<vector<int>> mat(n1, vector<int>(n2));
    cout << "Enter the elements in the matrix (each row must be sorted):\n";
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n2; j++){
            cin >> mat[i][j];
        }
    }

    int result = findMedian(mat);
    cout << "Median: " << result << endl;

    return 0;
}