#include <bits/stdc++.h>

using namespace std;

int main(){
    string s = "Bony Amin";
    cout << s << endl;
    cout << s.size() << endl;
    cout << s.max_size() << endl;
    cout << s.capacity() << endl;
    //s.clear(); means string clear
    s.resize(4);
    cout << s << endl;
    s.resize(7,'n');
    cout << s << endl;
    return 0;
}