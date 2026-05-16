/*
Shallow & Deep Copy:
A shallow copy of an object copies all of the member values from one object to another.

Deep Copy:
A deep copy, on the other hand, not only copies the member values but also makes copies of any dynamically allocated memory that the members point to.
*/

/*
Definition:
    A destructor is a special member function that is automatically called when an object is destroyed to release resources (memory, files, connections, etc.).

It mainly prevents memory leaks — especially when using new.

Rules:
    1. Same name as class
    2. Starts with ~
    3. No return type
    4. No parameters
    5. Only one destructor per class
    6. Automatically called

Why Destructor is Important (Dynamic Memory):
When we use new, memory stays in heap until we manually free it.
So destructor releases it.
*/
#include<iostream>
#include<string>
using namespace std;

class Student {
public:
    string name;
    // double cgpa;   static allocation(store in stack)
    double *cgpaPtr;    //Dynamically alloated memory at runtime(in heap)

    Student(string name, double cgpa){
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    // Student(Student &obj){      //Custom Copy Constructor
    //     this->name = obj.name;
    //     this->cgpaPtr = obj.cgpaPtr;   //locate at same location(shallow copy)
    // }
    Student(Student &obj){      //Custom Copy Constructor
        this->name = obj.name;
        this->cgpaPtr = new double;         //dynamic allocation with deep copy
        *(this->cgpaPtr) = *(obj.cgpaPtr);
    }

    ~Student(){
        cout << "I am destructor to free heap memory (dynamic)." <<endl;
        delete cgpaPtr;
    }

    void displayInfo(){
        cout << "Name: " <<name << endl;
        cout << "CGPA: " << *cgpaPtr << endl;
    }
};


int main(){
    cout << "\nStudent 1: " <<endl;
    Student s1("Nayem", 3.80);
    s1.displayInfo();

    cout << "\nStudent 2: " <<endl;
    Student s2(s1);
    s2.name = "Neha";    //stack memory (same locaion where Nayem store at s1 obj..we only chaged value not memory location)
    *(s2.cgpaPtr)= 3.99;        //shallow copy (now both s1.cpaPtr and s2.cgpaPtr locate at the smae heap location)
    s2.displayInfo();
}