#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
        char name[100];
        int roll;
        double cgpa;
};
int main(){
    Student s,s2,s3;
    s.roll = 10;
    s.cgpa = 3.5;
    char temp[100] = "Bony"; // Araay jei line a initialize kori sei line ei declare korte hoy
    strcpy(s.name,temp);
    cout << "Name-> " << s.name << "\n" << "Roll-> " << s.roll << "\n" << "Cgpa-> " << s.cgpa << "\n";

    cin.getline(s2.name,100);
    cin >> s2.roll >> s2.cgpa;
    cin.ignore();
    // getchar() same as cin.ignore()
    cout << "Name-> " << s2.name << "\n" << "Roll-> " << s2.roll << "\n" << "Cgpa-> " << s2.cgpa << "\n";

    cin.getline(s3.name,100);
    cin >> s3.roll >> s3.cgpa;
    cout << "Name-> " << s3.name << "\n" << "Roll-> " << s3.roll << "\n" << "Cgpa-> " << s3.cgpa << "\n";
    return 0;
}