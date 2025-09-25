#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
        int roll;
        int cls;
        double gpa;

    Student(int r, int c, double g){ // Create constructor that has no return type and the name as same as class name
        roll = r;
        cls = c;
        gpa = g;
    }
};
int main(){
    Student bony(7,9,5.00);
   
    cout << "Roll-> " << bony.roll << "\n" << "Class-> " << bony.cls << "\n" << "Gpa-> " << bony.gpa << "\n";
    return 0;
}