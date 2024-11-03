#include <stdio.h>
#include <string>
struct Subject{
    std::string title;
    double averageGrade;
};
class Student{
    private:
        std::string _firstName;
        std::string _lastName;
        Subject* _subjects=nullptr;
        int _nSubjects=0;

    public:
        Student(std::string,std::string);
        Student(std::string,std::string,Subject*, int);
        void printName();
        void addSubject(Subject);
        void printSubjects();
        Student& operator=(const Student&);
};
