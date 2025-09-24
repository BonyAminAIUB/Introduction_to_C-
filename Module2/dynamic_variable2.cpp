#include <bits/stdc++.h>
using namespace std;
int *p;
// void func(){
//     int x = 10;
//     p = &x;
//     cout << "Function: " << *p << "\n";
//     return;
// }
void func2(){
    int *x = new int;
    *x = 100;
    p = x;
    cout << "Function: " << *p << "\n";
    return;
}
int main(){
    //func();
    func2();
    cout << "Main: " << *p << "\n";
    return 0;
}