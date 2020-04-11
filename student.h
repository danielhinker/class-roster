#include <string>

class Student {
    
    public:
        void createStudentNum();
        int getStudentId() const;
    
    private:
        int student_id;

};

void Student::createStudentNum() {
    student_id = 1;
}

int Student::getStudentId() const {
    return student_id;
}