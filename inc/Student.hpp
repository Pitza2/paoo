#ifndef STUDENT_H
#define STUDENT_H
#include <stdio.h>
#include <string>
struct Subject{
    std::string title;
    double averageGrade = 0.0;
};
class Student{
    private:
        std::string _firstName;
        std::string _lastName;
        Subject* _subjects=nullptr;
        int _nSubjects=0;

    public:
        Student() = delete;
        Student(std::string,std::string);
        Student(std::string,std::string,Subject*, int);
        Student(const Student&);
        Student(Student&&);
        double grade();
        bool hasFailedSubjects();
        void printName();
        void addSubject(Subject);
        void printSubjects();
        Student& operator=(const Student&);
        ~Student();
};
#endif