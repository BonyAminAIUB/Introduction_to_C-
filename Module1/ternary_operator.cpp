#include <iostream>

using namespace std;

int main(){
    int x = 6;
    // (condition ? True : False) -> Ternary operator
    (x % 2 == 0) ? cout << "Even\n" : cout << "Odd\n";
    return 0;
}