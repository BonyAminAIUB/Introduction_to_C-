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
Student* fun(){  
    Student* obj = new Student(8,9,4.83);
    return obj;
}
int main(){
    Student* amin = fun();
    cout << "Roll-> " << amin->roll << "\n" << "Class-> " << amin->cls << "\n" << "Gpa-> " << amin->gpa << "\n";
    return 0;
}