#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    cout << s << endl;

    stringstream ss(s);
    string word;
    // ss >> word;
    // cout << word << endl;

    // ss >> word;
    // cout << word << endl;

    // ss >> word;
    // cout << word << endl;

    // line 11 to 18 same kaj loop use kore kora jay
    int count = 0;
    while(ss >> word){
        cout << word << endl;
        count ++;
    }
    cout << count << endl;
    return 0;
}