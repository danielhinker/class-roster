#include <string>
// #include "degree.h"
#include "roster.h"


Roster::Roster() {
    // for (int i = 0; i < 5; i++) {
    //     delete classRosterArray[i];
    //     classRosterArray[i] = nullptr;
    // }
    // classRosterArray = nullptr;
    addCounter = 0;
}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram) {

    classRosterArray[addCounter] = new Student(studentID, firstName,  lastName,  emailAddress ,  age,  daysInCourse1, daysInCourse2, daysInCourse3, degreeprogram);
    
    addCounter++;
            
    

}

void Roster::remove(string StudentID) {

    for (int i=0; i < 5; i++) {
        
        if (classRosterArray[i] != nullptr && classRosterArray[i]->GetStudentID() == StudentID) {
            // classRosterArray[i] = remove ;
            delete classRosterArray[i];
            classRosterArray[i] = nullptr;
            addCounter = i;
            return;
        
        } else {}
    }
    cout << "Student Not Found";
}

void Roster::printAll() {
    for (int i = 0; i < 5; i++) {
        if (classRosterArray[i] != nullptr) {
            classRosterArray[i]->print();
        }
    }
}

void Roster::printAverageDaysInCourse(string StudentID) {

}

void Roster::printInvalidEmails() {
    for (int i = 0; i < 5; i++) {
        if (classRosterArray[i] != nullptr) {
            string studentEmail = classRosterArray[i]->GetEmailAddress();
            
                if ((studentEmail.find('@') > studentEmail.size()) || (studentEmail.find('.') > studentEmail.size()) || (studentEmail.find(' ') < studentEmail.size())) {
                    cout << studentEmail;
                }
            
        }
    }
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
    for (int i = 0; i < 5; i++) {
        if (classRosterArray[i] != nullptr && classRosterArray[i]->GetDegreeProgram() == degreeType[degreeProgram]) {
            
            classRosterArray[i]->print();
        }
    }

}
