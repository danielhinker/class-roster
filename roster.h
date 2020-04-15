#include <string>
#include "degree.h"

using namespace std;

class Roster {
    public:
        void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram);
        void remove(string StudentID);
        void printAll();
        void printAverageDaysIncourse(string StudentID);
        void printInvalidEmails();
        void printByDegreeProgram(DegreeProgram degreeProgram);

    private:
        
};

void Roster::printAll() {
    
}