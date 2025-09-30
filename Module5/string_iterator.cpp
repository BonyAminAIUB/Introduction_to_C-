#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "Bony";
    // for(int i = 0; i<s.size(); i++){
    //     cout << s[i] << endl;
    // }
    cout << *s.begin() << endl; // B
    cout << *s.end() << endl; // NUL
    cout << *(s.end()-1) << endl; // y
    cout << endl;

    // iterator
    // for(string :: iterator it = s.begin(); it < s.end(); it++){
    //     cout << *it << endl;
    // }
    // or
    for(auto it = s.begin(); it < s.end(); it++){
        cout << *it << endl;
    }
    return 0;
}