#include <iostream>
#include <string>
#include "roster.cpp"
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

    // for (int i =0)
    string studentData1 = studentData[0];

    char charArray[studentData1.size() + 1];
    
    strcpy(charArray, studentData1.c_str());
    cout << charArray;
    
    // char str[] = charArray;
  char * charPointer;
  
  charPointer = strtok (charArray," ,");
  
  while (charPointer != NULL)
  {
    printf ("%s\n",charPointer);
    charPointer = strtok (NULL, ",");
  }


    // for (int i = 0; i < 5; i++) {
        

    //     parsedString
    //     string stringRight= studentData[i].substr(commaIndex+1);
    //     string studentID = studentData[i].substr(0, commaIndex);
    //     string firstName = ;
    //     string lastName;
    //     string emailAddress;
    //     int age;
    //     int* daysInCourse;
    //     DegreeProgram degreeprogram;
        
    //     // string splitArray[] = studentData[i].
    //     // cout << studentData[0].substr(0,1);
    // }
    // for (int i = 0; i < 5; i++) {
    //    classRoster.add(studentData[i]);
    // }

    
 
    // classRoster.add("1", "Daniel",  "Hinker",  "danhinker@gmail.com" ,  22,  5,6,7, SOFTWARE);
    // classRoster.add("2", "Daniel",  "Hinker",  "danhinker@gmail.com" ,  22,  5,6,7, SOFTWARE);
    
    // Student* studentPointer;
    // studentPointer = 
    // cout << classRoster.classRosterArray[0]->GetFirstName();
    // classRoster.remove("1");

    // classRoster.add("1", "Daniel",  "Hinker",  "danhinker@gmail.com" ,  22,  5,6,7, SOFTWARE);
    // classRoster.remove("2");
    // classRoster.printByDegreeProgram(SOFTWARE);

    

    return 0;
}

