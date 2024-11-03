#include <stdio.h>
#include<string>
#include <algorithm>
#include <iostream>
#include"Student.hpp"
int main(){
    std::string arr[]={"dasdsa","dasdasd","fasdas"};
    std::string* arr2= new std::string[3];
    std::copy(arr,arr+3,arr2);   
    for(int i=0;i<3;i++){
        std::cout<<arr2[i]<<" ";
    } 
    Student a("dadsa","dsadas");
    Subject subjects[]={{"mat1",5},{"mat2",6},{"mat3",7}};
    Student b("ion","ionel",subjects,3);
    b.printSubjects();
    Subject subjects2[]={{"mat5",7},{"mat6",8},{"mat7",9}};
    
    Student c("ion","Mihai",subjects2,3);
    b=c;
    b.printSubjects();
    return 0;
}