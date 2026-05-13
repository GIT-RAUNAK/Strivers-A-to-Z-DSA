// Count the number of characters in the String

#include<iostream>
using namespace std;
#include<vector>
#include<string>

int main(){
    string s;
    cout<<"Enter a string:\n";
    getline(cin, s);
    vector<int> hash(256,0);
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;
    }
    for(int i=0; i<s.size(); i++){
        cout<< s[i] << "-->" << hash[s[i]] <<endl;
    }
}