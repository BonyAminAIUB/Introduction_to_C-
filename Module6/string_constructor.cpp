#include <bits/stdc++.h>
using namespace std;

int main(){
    string s("Bony Amin");
    // or 
    // string s = "Bony Amin"; 
    // or
    //string s("Bony Amin",4);  //1st 4 letter print korbe
    string t(s,4); // 4 number index theke print kora suru korbe
    cout << s << endl;
    cout << t << endl;
    
    string s1(5,'A'); // 5 ta A pring korbe
    cout << s1 << endl;
    return 0;
}