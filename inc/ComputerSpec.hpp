#include "Specialization.hpp"
class ComputerSpec : public Specialization{
    public:
    ComputerSpec();
    void enrollStudent(std::string, std::string,int);
    void endYear();
    void printStudents();
    void changeGrade(int, int,double);
};