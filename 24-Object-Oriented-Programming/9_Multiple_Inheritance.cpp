#include<iostream>
#include<string>
using namespace std;

class Teacher {
public:
    string subject;
    double salary;

    Teacher (string subject, double salary){
        this->subject = subject;
        this->salary = salary;
    }
};

class Student {
public:
    string studentId;
    string name;

    Student(string studetId, string name){
        this->studentId =studentId;
        this->name = name;
    }
};

//multiple inheritance
class TeachingAssistant : public Teacher, public Student{
public:
    int age;
    TeachingAssistant(string subject, double salary, string studentId, string name, int age) : Teacher(subject, salary), Student(studentId, name){
        this->age = age;
    }

    void displayInfo(){
         cout << "Name: " << name << endl;
        cout << "Student ID: " << studentId << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
        cout << "Age: " << age << endl;
    }
};

int main(){
    TeachingAssistant ta("Quantum Physics", 334343.44, "757546746", "Nayem", 24);
    ta.displayInfo();

}