#include <iostream>
#include <string>
#include "student.h"
// using namespace std;

Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram) {
    this->studentID = studentID;
    this->firstName = firstName;
    this->lastName = lastName;
    this->emailAddress = emailAddress;
    this->age = age;
    int daysInCourseArray[3];
    daysInCourseArray[0] = daysInCourse1;
    daysInCourseArray[1] = daysInCourse2;
    daysInCourseArray[2] = daysInCourse3;
    this->daysInCourse = daysInCourseArray;
    this->degreeprogram = degreeprogram;
    
}


void Student::SetStudentID(string studentID) {
    this->studentID = studentID;
}

void Student::SetFirstName(string firstName) {
    this->firstName = firstName;
}

void Student::SetLastName(string lastName) {
    this->lastName = lastName;
}

void Student::SetEmailAddress(string emailAddress) {
    this->emailAddress = emailAddress;
}

void Student::SetStudentAge(int age) {
    this->age = age;
}

void Student::SetDaysInCourse(int daysInCourse1, int daysInCourse2, int daysInCourse3) {
        int daysArray[3];
        
        daysArray[0] = daysInCourse1;
        daysArray[1] = daysInCourse2;
        daysArray[2] = daysInCourse3;
        this->daysInCourse = daysArray;
        
}

void Student::SetDegreeProgram(DegreeProgram degreeprogram) {
    this->degreeprogram = degreeprogram;
}

string Student::GetStudentID() const {
    return studentID;
}

string Student::GetFirstName() const {
    return firstName;
}

string Student::GetLastName() const {
    return lastName;
}

string Student::GetEmailAddress() const {
    return emailAddress;
}

int Student::GetAge() const {
    return age;
}

int* Student::GetDaysInCourse() const {
    return daysInCourse;
}

string Student::GetDegreeProgram() const {
   
    return degreeType[degreeprogram];
}

void Student::print() const {
    int* DaysInCourse = GetDaysInCourse();
    cout << DaysInCourse[0];
    cout << DaysInCourse[0];
    cout << DaysInCourse[0];
    cout << "First Name: " << GetFirstName() << "    ";
    cout << "Last Name: " << GetLastName() << "    ";
    cout << "Email Address: " << GetEmailAddress() << "    ";
    cout << "Age: " << GetAge() << "    ";
    cout << "daysInCourse: {" << DaysInCourse[0] << ", " << DaysInCourse[1] << ", " << DaysInCourse[2] << "}    ";
    cout << "Degree Program: " << GetDegreeProgram() << ".";
    return;
}

// int main() {
//     int myArray[3] = {1, 2, 3};
//     cout << *myArray;
    // Student student1("1", "Daniel",  "Hinker",  "danhinker@gmail.com" ,  22,  1,2,3, SOFTWARE);
//     // int* newArray = student1.GetDaysInCourse();
//     student1.PrintData();
//     // cout << *newArray;
//     // cout << student1.GetAge();
//     // student1.SetStudentID("asdfasdf");
//     // cout << "hey " << student1.GetStudentID() << endl;
//     // return 0;
// }

