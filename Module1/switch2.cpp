#include <iostream>

using namespace std;

int main(){
    int x;
    cin >> x;
    switch(x%2){
        case 0:
            cout << "Even\n";
            break;
        case 1:
            cout << "Odd\n";
            break;
        default:
            cout << "Not even nor odd\n";
    }
    return 0;
}