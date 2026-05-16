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

    void displayInfo(){
        cout << "Name: " << name <<endl;
        cout << "Student ID: " <<studentId <<endl;
    }
};

int main(){
    Student s1("Nayem", "12323233");
    s1.displayInfo();
}