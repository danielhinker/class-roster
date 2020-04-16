#include <string>
#include "degree.h"
using namespace std;

class Student {
    
    public:

    Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram);

    // Mutators
        void SetStudentID(string studentID);         
        void SetFirstName(string firstName);            
        void SetLastName(string lastName);              
        void SetEmailAddress(string emailAddress);       
        void SetStudentAge(int age);                          
        void SetDaysInCourse(int daysInCourse1, int daysInCourse2, int daysInCourse3);
        void SetDegreeProgram(DegreeProgram degreeprogram);

    // Accessor
        string GetStudentID() const;         
        string GetFirstName() const;       
        string GetLastName() const;        
        string GetEmailAddress() const;    
        int GetAge() const;               
        int* GetDaysInCourse() const;             
        string GetDegreeProgram() const;
        void print() const;
        
    private:
        string studentID;
        string firstName;
        string lastName;
        string emailAddress;
        int age;
        int* daysInCourse;
        DegreeProgram degreeprogram;
};