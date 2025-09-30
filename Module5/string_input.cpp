#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    //cin.getline(s,100); eta char array er jonno -> char s[100]
    getline(cin, s);
    cout << s << endl;

    int n;
    cin >> n;
    string s1;
    cin.ignore();
    getline(cin,s1);
    cout << n << endl;
    cout << s1 << endl;
    return 0;
}