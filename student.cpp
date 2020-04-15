#include <iostream>
#include <string>
#include "student.h"
// using namespace std;

Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, int* daysInCourse, DegreeProgram degreeprogram) {
    this->studentID = studentID;
    this->firstName = firstName;
    this->lastName = lastName;
    this->emailAddress = emailAddress;
    this->age = age;
    // this->daysInCourse = new int[3];
    // for (int i = 0; i < 3; i++) {
    //     this->daysInCourse[i] = daysInCourse[i];    
    // };
    this->daysInCourse = daysInCourse;
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

void Student::SetDaysInCourse(int daysInCourse[]) {
    for (int i = 0; i < 3; i++) {
        this->daysInCourse[i] = daysInCourse[i];
    }
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

void Student::PrintData() const {
    cout << "First Name: " << GetFirstName() << endl;
    cout << "Last Name: " << GetLastName() << endl;
    cout << "Email Address: " << GetEmailAddress() << endl;
    cout << "Age: " << GetAge() << endl;
    cout << "Days to Complete Course 1: " << GetDaysInCourse()[0] << endl;
    cout << "Days to Complete Course 2: " << GetDaysInCourse()[1] << endl;
    cout << "Days to Complete Course 3: " << GetDaysInCourse()[2] << endl;
    cout << "Degree Program: " << GetDegreeProgram() << endl;
    return;
}

int main() {
    int myArray[3] = {1, 2, 3};
    cout << *myArray;
    Student student1("1", "Daniel",  "Hinker",  "danhinker@gmail.com" ,  22,  myArray, SOFTWARE);
    // int* newArray = student1.GetDaysInCourse();
    student1.PrintData();
    // cout << *newArray;
    // cout << student1.GetAge();
    // student1.SetStudentID("asdfasdf");
    // cout << "hey " << student1.GetStudentID() << endl;
    // return 0;
}

