#include <iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    cout << x << " " << "\n";
    char c = 'A';
    int ascii = c;
    cout << ascii << "\n"; // or
    cout << int(c) << "\n"; // Type casting 
    return 0;
}