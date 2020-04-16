#include <string>
// #include "degree.h"
#include "roster.h"


Roster::Roster() {
    for (int i = 0; i < 5; i++) {
        
        classRosterArray[i] = nullptr;
    }
 
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
    cout << "student with this ID was not found.";
}

void Roster::printAll() {
    for (int i = 0; i < 5; i++) {
        if (classRosterArray[i] != nullptr) {
            classRosterArray[i]->print();
        }
    }
}

void Roster::printAverageDaysInCourse(string StudentID) {
    for (int i = 0; i < 5; i++) {
        if (classRosterArray[i] != nullptr && classRosterArray[i]->GetStudentID() == StudentID) {
            
            int* daysInCourse = classRosterArray[i]->GetDaysInCourse();
            cout << ((daysInCourse[0] + daysInCourse[1] + daysInCourse[2]) / 3) << endl;
            return;
        }
    }
}

void Roster::printInvalidEmails() {
    for (int i = 0; i < 5; i++) {
        if (classRosterArray[i] != nullptr) {
            string studentEmail = classRosterArray[i]->GetEmailAddress();
            
                if ((studentEmail.find('@') > studentEmail.size()) || (studentEmail.find('.') > studentEmail.size()) || (studentEmail.find(' ') < studentEmail.size())) {
                    cout << studentEmail << endl;
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
