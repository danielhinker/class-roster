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
    this->daysInCourse = new int[3];
    this->daysInCourse[0] = daysInCourse1;
    this->daysInCourse[1] = daysInCourse2;
    this->daysInCourse[2] = daysInCourse3;
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
        
        this->daysInCourse[0] = daysInCourse1;
        this->daysInCourse[1] = daysInCourse2;
        this->daysInCourse[2] = daysInCourse3;
        
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
    cout << "First Name: " << GetFirstName() << "    ";
    cout << "Last Name: " << GetLastName() << "    ";
    cout << "Email Address: " << GetEmailAddress() << "    ";
    cout << "Age: " << GetAge() << "    ";
    cout << "daysInCourse: {" << GetDaysInCourse()[0] << ", " << GetDaysInCourse()[1] << ", " << GetDaysInCourse()[2] << "}    ";
    cout << "Degree Program: " << GetDegreeProgram() << "." << endl;
    return;
}
