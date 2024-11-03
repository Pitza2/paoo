#include "Student.hpp"
#include "string.h"
#include <iostream>
Student::Student(std::string firstName,std::string lastName) : _firstName(firstName), _lastName(lastName){}
Student::Student(std::string firstName,std::string lastName,Subject* subjects,int n) : _firstName(firstName), _lastName(lastName), _nSubjects(n){
    _subjects=new Subject[n];
    std::copy(subjects,subjects+n,_subjects);
    _nSubjects=n;
}

void Student::printName(){
    std::cout<<_firstName<<" "<<_lastName;
}

void Student::addSubject(Subject s){
    Subject* newSubjectArray=new Subject[_nSubjects+1];
    std::copy(_subjects,_subjects+_nSubjects,newSubjectArray);
    newSubjectArray[_nSubjects]=s;
    delete[] _subjects;
    _subjects=newSubjectArray;
}
void Student::printSubjects(){
    for(int i=0;i<_nSubjects;i++){
        std::cout<<_subjects[i].title<<" "<<_subjects[i].averageGrade<<"\n";
    }
}
Student& Student::operator=(const Student& s){
    if(this != &s){
        _firstName=s._firstName;
        _lastName=s._lastName;
        _nSubjects=s._nSubjects;
        if(_subjects!=nullptr)
        delete[] _subjects;
        _subjects=new Subject[s._nSubjects];
        std::copy(s._subjects,s._subjects+s._nSubjects,_subjects);
    }
    return *this;
}