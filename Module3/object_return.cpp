#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
        int roll;
        int cls;
        double gpa;

    Student(int roll, int cls, double gpa){ // Create constructor that has no return type and the name as same as class name
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};
Student fun(){  // fun() function jar return type Student
    Student obj(8,9,4.83);
    return obj;
}
int main(){
    Student bony(7,9,5.00);
    Student amin = fun();
    cout << "Roll-> " << bony.roll << "\n" << "Class-> " << bony.cls << "\n" << "Gpa-> " << bony.gpa << "\n";
    cout << "Roll-> " << amin.roll << "\n" << "Class-> " << amin.cls << "\n" << "Gpa-> " << amin.gpa << "\n";
    return 0;
}