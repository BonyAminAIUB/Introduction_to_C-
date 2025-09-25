#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    // sort(starting, ending er ag porjonto sort korbe);
    sort(a,a+n);
    for(int i = 0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << "\n";
    sort(a,a+n,greater<int>()); // Descending order
    for(int i = 0; i<n; i++){
        cout << a[i] << " ";
    }
    return 0;
}