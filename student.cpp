#include <iostream>
#include <string>
#include "student.h"
using namespace std;

int main() {
    Student student1;
    student1.createStudentNum();
    cout << "Student License: " << student1.getStudentId() << endl;
}