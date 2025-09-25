#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
        int roll;
        int cls;
        double gpa;

    Student(int roll, int cls, double gpa){ 
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};
int main(){
    Student bony(7,9,5.00);
    Student* amin = new Student(10,9,4.83);  // dynamic object
    cout << "Roll-> " << bony.roll << "\n" << "Class-> " << bony.cls << "\n" << "Gpa-> " << bony.gpa << "\n";
    cout << "Roll-> " << amin->roll << "\n" << "Class-> " << amin->cls << "\n" << "Gpa-> " << amin->gpa << "\n";
    return 0;
}