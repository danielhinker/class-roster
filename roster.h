#include <string>
#include "student.cpp"
using namespace std;

class Roster {
    public:
        Roster();
        void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram);
        void remove(string StudentID);
        void printAll();
        void printAverageDaysInCourse(string StudentID);
        void printInvalidEmails();
        void printByDegreeProgram(DegreeProgram degreeProgram);
        Student* classRosterArray[5];
        int addCounter;

    private:
        
};
