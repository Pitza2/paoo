#include "ComputerSpec.hpp"
#include <iostream>
#include <algorithm>
ComputerSpec::ComputerSpec(){
    _subjectList.push_back({"c++ programming"});
    _subjectList.push_back({"java programming"});
    _subjectList.push_back({"algebra"});
    year=1;
}

void ComputerSpec::enrollStudent(std::string firstName,std::string lastName, int highSchoolGrade){
    if(highSchoolGrade < 7){
        std::cout<<"failed to enroll student, his grade is too low\n";
        return;
    }
    _studentList.push_back(Student(firstName,lastName,_subjectList.data(),_subjectList.size())); 
}
void ComputerSpec::endYear(){
        if(year > 4){
            std::cout<<"can't end year this generation already finished the 4 years\n";
        }
    year++;
    _studentList.erase(std::remove_if(_studentList.begin(),_studentList.end(), [](Student s){return s.grade() < 6 && s.hasFailedSubjects();}));
}
void ComputerSpec::printStudents(){
    auto it = _studentList.begin();
    for(;it!=_studentList.end();it++){
        it->printName();
    }
}
void ComputerSpec::changeGrade(int studentId, int subjectId,double grade){
    _studentList[studentId].changeSubjectGrade(subjectId,grade);
}