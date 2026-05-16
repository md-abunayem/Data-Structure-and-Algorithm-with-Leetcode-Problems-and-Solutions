/*
What is Inheritance?
Inheritance is a mechanism where a new class (derived/child class) acquires the properties and behaviors of an existing class (base/parent class).

Types of Inheritance in C++:
There are 5 main types:
    1. Single Inheritance
    2. Multiple Inheritance
    3. Multilevel Inheritance
    4. Hierarchical Inheritance
    5. Hybrid Inheritance
*/

/*
Advantages of Inheritance:
    1. Code reuse
    2. Reduces redundancy
    3. Easy maintenance
    4. Supports polymorphism
    5. Logical hierarchy modeling
*/

/*
Order (Priority) of Constructor & Destructor Calls in C++
🧱 Constructor Call Order:
When an object of a derived class is created:
    Base class constructor runs FIRST → then Derived class constructor
Because the child needs the parent to be built first.

🧹 Destructor Call Order:
When the object is destroyed:
    Derived class destructor runs FIRST → then Base class destructor
Because the child is removed first, then the parent.
*/

#include<iostream>
#include<string>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person(string name, int age){
        cout << "Parent Constructor\n";
        this->name = name;
        this->age = age;
    }

    // void displayName(){
    //     cout << "Name: " << name << endl;
    //     cout << "Age: " << age << endl;
    // }

    ~Person(){
        cout << "Parent Destructor\n";
    }

};

class Student : public Person {
public:
    int id;

    Student(string name, int age, int id) : Person(name, age){
        cout << "Child Constructor\n";
        this->id = id;
    }
    void displayID(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "ID: " << id << endl;
    }
    

    ~Student(){
        cout << "Child Destructor\n";
    }
};
int main(){
    Student s("Nayem", 24, 2211222);
    s.displayID();

    return 0;
}