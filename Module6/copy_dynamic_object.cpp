// Module 3.5 Practice problem 2
/*
#include <bits/stdc++.h>
using namespace std;
class Cricketer{
    public:
    int jersey;
    string country;
    Cricketer(string country,int jersey){
        this->jersey = jersey;
        this->country = country;
    }
};
int main(){
    Cricketer* dhoni = new Cricketer("India",100);
    Cricketer* kohli = new Cricketer("India",18);
    cout << dhoni->jersey << endl;
    cout << kohli->jersey << endl;
    //kohli = dhoni;
    // cout << dhoni->jersey << endl;
    // cout << kohli->jersey << endl;

    // kohli->country = dhoni->country;
    // kohli->jersey = dhoni->jersey;
    *kohli = *dhoni; // same as line 22,23
    delete dhoni;
    cout << kohli->jersey << " " << kohli->country << endl;
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;
class Footballer{
    public:
    string country;
    int jersey;
    Footballer(string country, int jersey){
        this->country = country;
        this->jersey = jersey;
    }
};
int main(){
    Footballer* messi = new Footballer("Argentina", 10);
    Footballer* ronaldo = new Footballer("Portugal", 7);
    *messi = *ronaldo;
    delete ronaldo;
    cout << messi->country << " " << messi->jersey << endl;
    return 0;
}