#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
        int roll;
        int cls;
        double gpa;

    Student(int roll, int cls, double gpa){ // Create constructor that has no return type and the name as same as class name
        this->roll = roll;
        //(*this).roll = roll; same as line 10
        this->cls = cls;
        this->gpa = gpa;
    }
};
int main(){
    Student bony(7,9,5.00);
   
    cout << "Roll-> " << bony.roll << "\n" << "Class-> " << bony.cls << "\n" << "Gpa-> " << bony.gpa << "\n";
    return 0;
}