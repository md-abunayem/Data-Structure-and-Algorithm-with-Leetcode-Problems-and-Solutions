#include <iostream>
#include <string>
using namespace std;

class Person {
public: 
    string name;
    int age;
};

class Student : public Person {
public:
    int rollno;
};

class Teacher : public Person {
public:
    string subject;
};

int main(){
    Student s1;
    s1.name = "Nayem";
    s1.age = 23;
    s1.rollno = 24;

    cout << "Student Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Roll No: " << s1.rollno << endl;


    //Teacher
    Teacher t1;
    t1.name = "Michel";
    t1.age = 35;
    t1.subject = "Quantum Computing";

    cout << "\nTeacher Name: " << t1.name << endl;
    cout << "Teacher age: " << t1.age << endl;
    cout << "Teacher's Subject: " << t1.subject << endl;
    return 0;
}