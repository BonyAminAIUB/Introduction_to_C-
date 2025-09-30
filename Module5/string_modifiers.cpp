#include <bits/stdc++.h>

using namespace std;

int main(){
    string s = "Bony";
    string s2 = " Amin";
    s += s2;
    //s.append(s2); same as line 8
    cout << s << endl;
    s.push_back('n'); // only for single character push kore last a
    // s += 'n'; same as line 11
    cout << s << endl;
    s.pop_back(); // last index er value delete hoye jabe
    cout << s << endl;
    return 0;
}