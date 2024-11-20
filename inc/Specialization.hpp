#include "Student.hpp"
#include<vector>
class Specialization{
    protected:
    std::vector<Subject> _subjectList;
    int year;
    std::vector<Student> _studentList;
    Specialization();
    public:
    virtual void enrollStudent(std::string, std::string, int)=0;
    virtual void endYear()=0;
    virtual void printStudents()=0;
};