#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
        int id;
        string name;
        char section;
        int total_marks;
};
int main(){
    int t;
    cin >> t;
    while(t--){
        Student detail;
        detail.total_marks = -1;
        detail.id = 4;
        for(int i = 0; i<3; i++){
            Student s;
            cin >> s.id >> s.name >> s.section >> s.total_marks;
            if((s.total_marks > detail.total_marks) || (s.total_marks == detail.total_marks) && (s.id < detail.id)){
                detail = s;
            }
        }
        cout << detail.id << " " << detail.name << " " << detail.section << " " << detail.total_marks << endl;
    }
    return 0;
}