// Count the number of characters in the String

#include<iostream>
using namespace std;
#include<vector>
#include<string>
#include<unordered_map>

int main(){
    string s;
    cout<<"Enter a string:\n";
    getline(cin, s);
    unordered_map <char, int> mpp;
    for(int i=0;i<s.size();i++){
        mpp[s[i]]++;
    }
    for(auto it: mpp){
        cout<< it.first << "->" <<it.second<<endl;
    }
}