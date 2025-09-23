#include <iostream>

using namespace std;

int main(){
    int x;
    cin >> x;
    cin.ignore(); // int er porer space ta ignore kore
    char s[100];
    cin.getline(s,100);
    cout << x << "\n" << s << "\n\n";
    string s1;
    cin >> s1;
    cout << s1 << "\n";
    return 0;
}