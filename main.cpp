#include <iostream>
#include <string>
#include "roster.cpp"
#include "vector"
// #include<stdio.h> 

using namespace std;

int main() {
    // cout << "Scripting and Programming Applications: C867" << endl;
    // cout << "Programming Language: C++" << endl;
    // cout << "Student ID: 001284172" << endl;
    // cout << "Student Name: Daniel Hinker" << endl;
  
    // const string studentData2[] = 

    // {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY"};
    Roster classRoster;
    const string studentData[] = 

    {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,[firstname],[lastname],[emailaddress],[age], [numberofdaystocomplete3courses],SOFTWARE"};

    for (int i = 0; i < 5; i++) {

    
    string studentData1 = studentData[i];

    char charArray[studentData1.size() + 1];
    
    strcpy(charArray, studentData1.c_str());

    char * charPointer;
  
    charPointer = strtok (charArray," ,");

    char *charPointer2;;
    vector<string> stringVector;
    int counter = 0;

    while (charPointer != NULL) {
        if (counter == 8) {
            charPointer2 = charPointer;
        } else if (counter == 6) {
            charPointer2 = charPointer;
        }
        stringVector.push_back(charPointer);
        charPointer = strtok (NULL, ",");
        counter++;
    }
    // cout << stringVector.size();
    if (stringVector.size() == 9) {
    
        string studentID = stringVector[0];
        string firstName = stringVector[1];
        string lastName = stringVector[2];
        string emailAddress = stringVector[3];
        int age = stoi(stringVector[4]);
        int daysInCourse1 = stoi(stringVector[5]);
    
        int daysInCourse2 = stoi(stringVector[6]);
        int daysInCourse3 = stoi(stringVector[7]);

        // cout << charPointer2;
        DegreeProgram degreeprogram;
        if (strcmp(charPointer2,"SECURITY") == 0) {
            degreeprogram = SECURITY;
        } else if (strcmp(charPointer2, "NETWORK") == 0) {
            degreeprogram = NETWORK;
        } else {
            degreeprogram = SOFTWARE;
        }
     
        
        
        classRoster.add(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeprogram);
        } else {
            string studentID = stringVector[0];
        string firstName = stringVector[1];
        string lastName = stringVector[2];
        string emailAddress = stringVector[3];
        int age = 0;
        int daysInCourse1 = 0;
        int daysInCourse2 = 0;
        int daysInCourse3 = 0;

        DegreeProgram degreeprogram;
        if (strcmp(charPointer2, "SECURITY") == 0) {
            degreeprogram = SECURITY;
        } else if (strcmp(charPointer2, "NETWORK") == 0) {
            degreeprogram = NETWORK;
        } else {
            degreeprogram = SOFTWARE;
        }
     
        
        
        classRoster.add(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeprogram);
        }
        }
        // classRoster.printAll();
        // classRoster.printInvalidEmails();
        // for (int i = 0; i < 5; i++) {
        //     classRoster.printAverageDaysInCourse(classRoster.classRosterArray[i]->GetStudentID());
        // }

        // classRoster.printByDegreeProgram(SOFTWARE);

        classRoster.remove("A3");

        classRoster.printAll();

        classRoster.remove("A3");

    

    return 0;
}

