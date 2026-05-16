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

    Student(string name, string studentId)
        : Person(name)
    {
        this->studentId = studentId;
    }
};

class Teacher : public Person {
public:
    string subject;

    Teacher(string name, string subject)
        : Person(name)
    {
        this->subject = subject;
    }
};

// Hybrid inheritance (no virtual)
class TeachingAssistant : public Student, public Teacher {
public:
    int age;

    TeachingAssistant(string name, string studentId,
                      string subject, int age)
        : Student(name, studentId), Teacher(name, subject)
    {
        this->age = age;
    }

    void display(){
        // MUST specify path because two Person objects exist
        //Scope resolution operator (::) is used to specify the class or namespace to which a member belongs, especially to remove ambiguity in multiple inheritance.
        cout << "Student Name: " << Student::name << endl;  
        cout << "Teacher Name: " << Teacher::name << endl;

        cout << "Student ID: " << studentId << endl;
        cout << "Subject: " << subject << endl;
        cout << "Age: " << age << endl;
    }
};

int main(){
    TeachingAssistant ta("Nayem", "2211222", "OOP", 24);
    ta.display();
}