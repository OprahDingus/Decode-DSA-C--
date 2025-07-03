#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int rollNo;
    float marks;
    Student(string name, int rollNo, float marks) {
        this->name = name;
        this->rollNo = rollNo;
        this->marks = marks;
    }
    // Student(string n, int r, float m) {
    //     name = n;
    //     rollNo = r;
    //     marks = m;
    // }
};

void change(Student* s) {
    s->name = "Pom";
}

int main(void) {
    Student s("Onurag", 22, 70.8);
    // Student* s = new Student("Onurag", 22, 70.8);
    cout << s.name << endl;
    // s.name = "Onurag";
    // s.rollNo = 22;
    // s.marks = 70.8;
    Student* ptr = &s;
    // (*ptr).name = "Horsh";
    ptr->name = "Horsh";
    cout << s.name << endl;
    s.name = "Ossan";
    change(&s);
    cout << s.name << endl;
    return 0;
}