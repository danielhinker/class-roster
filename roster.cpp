#include <string>
// #include "degree.h"
#include "roster.h"
#include "student.cpp"
// using namespace std;

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram) {

    int daysInCourseArray[3] = {daysInCourse1, daysInCourse2, daysInCourse3};
    Student student(studentID, firstName,  lastName,  emailAddress ,  age,  daysInCourseArray, degreeprogram);
    // classRoster->push_back(&student);
    // FIXME check if index of array is empty
    for (int i = 0; i < 5; i++) {

    }

}