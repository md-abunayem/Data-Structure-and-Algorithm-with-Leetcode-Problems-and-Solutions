#include<iostream>
#include<string>
using namespace std;

class Person {
public:
    string name;

    Person(string name){
        this->name = name;
    }

};

class Student : public Person {
public:
    string studentId;

    Student(string name, string studentId) : Person(name){
        this->studentId = studentId;
    }
};

class GraduatedStudent : public Student{
public:  
    string reseachArea;

    GraduatedStudent(string name, string studentId, string researchArea) : Student(name, studentId){
        this->reseachArea = researchArea;
    }

    void displayInfo(){
        cout << "Name: " << name <<endl;
        cout << "Student ID: " <<studentId <<endl;
        cout << "Research Area: " << reseachArea <<endl;
    }
};

int main(){
    GraduatedStudent s1("Nayem", "12323233", "Quantum Physics");
    s1.displayInfo();
}