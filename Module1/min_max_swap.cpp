#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    cout << min({a,b,c}) << "\n";  // 2 ta number hole first bracet ar beshi number hole 2nd bracet
    cout << max(a,b) << "\n";
    swap(a,b);
    cout << a << " " << b << "\n";
    return 0;
}