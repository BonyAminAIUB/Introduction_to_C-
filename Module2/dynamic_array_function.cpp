#include <bits/stdc++.h>

using namespace std;
int* fun(){
    int* p = new int[5];
    for(int i = 0; i<5; i++){
        cin >> p[i];
    }
    return p;
}
int main(){
    int* a = fun();
    for(int i = 0; i<5; i++){
        cout << a[i] << " ";
    }
    return 0;
}