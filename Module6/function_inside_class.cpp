#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    Student(string name, int roll){
        this->name = name;
        this->roll = roll;
    }
    void hello(){
        cout << "Hello" << endl;
    }
};
int main(){
    Student bony("Bony Amin",7);
    bony.hello();
    cout << bony.name << endl; 
    return 0;
}