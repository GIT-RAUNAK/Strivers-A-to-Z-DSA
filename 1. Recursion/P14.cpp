//Printing subsequences whose sum is k

#include<bits/stdc++.h>
using namespace std;

void display(const vector<int>& output){
    for(int x : output)
        cout << x << " ";
    cout << "\n";
}

void Subsequences(int i, int sum, int target, int n, const vector<int>& arr, vector<int>& output){
    if(i == n){
        if(sum == target)
            display(output);
        return;
    }

    output.push_back(arr[i]);
    Subsequences(i+1, sum + arr[i], target, n, arr, output);

    output.pop_back();
    Subsequences(i+1, sum, target, n, arr, output);
}

int main(){
    int n, k;
    cout << "Enter the size of array:\n";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the values in the array:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter the target sum:\n";
    cin >> k;

    vector<int> output;
    Subsequences(0, 0, k, n, arr, output);
}