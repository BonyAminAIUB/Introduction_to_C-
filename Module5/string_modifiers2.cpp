#include <bits/stdc++.h>

using namespace std;

int main(){
    string s = "Bony";
    string s2 = " Amin";
    s.assign(s2);
    //s = s2;  same as line 8
    cout << s << endl;

    string s3 = "Bony Amin";
    s3.erase(4);  // 4 number index theke delete hobe baki tuku
    // s3.erase(4,2);  4 number index theke next 2 character delete korbe
    cout << s3 << endl;

    string s4 = "Hello Bony";
    s4.replace(6,4,"Amin");  //replace(index_shuru, koyta_index, replace_part_tuku)
    cout << s4 << endl;
    
    string s5 = "Bony";
    s5.insert(4," Amin"); // insert(index_start, replace_part_tuku)
    cout << s5 << endl;
    return 0;
}