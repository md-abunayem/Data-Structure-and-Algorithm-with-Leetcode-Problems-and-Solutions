/*Special method invoked automatically at time of object creation. Used for Initialisation.
• Same name as class
• Constructor doesn't have a return type
• Only called once (automatically), at object creation
• Memory allocation happens when constructor is called

Types:
    1. Non-Parameterized Constructor
    2. Parameterized Constructor
    3. Copy Constructor
*/

/*
What is Constructor Overloading?
Constructor overloading is when a class has more than one constructor with the same name (which is always the class name) but different parameter lists.
    - The compiler decides which constructor to call based on the number or type of arguments provided when creating an object.
q   - Overloading helps you initialize objects in multiple ways.

Rules for Constructor Overloading:
    1. All constructors must have the same class name.
    2. Each constructor must have different parameters (number or type).
    3. Return type is not used for distinguishing constructors.
    4. You can have a default constructor, parameterized constructors, and a copy constructor in the same class.
*/

/*
What is a Copy Constructor?
A copy constructor is a special constructor that is used to create a new object as a copy of an existing object.
    1. It takes a reference to an object of the same class as a parameter.
    2. Its main purpose is to initialize one object using another object of the same class.
*/

/*
Shallow & Deep Copy:
A shallow copy of an object copies all of the member values from one object to another.

Deep Copy:
A deep copy, on the other hand, not only copies the member values but also makes copies of
any dynamically allocated memory that the members point to.
*/

#include <iostream>
#include <string>
using namespace std;

class Teacher
{
private:
    double salary; // Private member variable

public:
    string name;
    string dept;
    string subject;
    //Non-Parameterized constructor
    Teacher()
    {
        dept = "Computer Science"; // making dept as assign default
        salary = 600000.66;
        cout << "Non-Parameterized Constructorv Called:";
    }

    //Parameterized constructor
    // Teacher(string n, string d, string s, double sl)
    // { // constructor overriding
    //     cout << "\nParameterized Constructor Called:" << endl;
    //     name = n;
    //     dept = d;
    //     subject = s;
    //     salary = sl;
    // }

    //Another way with "this" keyword
    Teacher(string name, string dept, string subject, double salary)
    { // constructor overriding
        cout << "\nParameterized Constructor Called:" << endl;
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    //Custom Copy Constructor
    Teacher(Teacher &orgObj){    //pass by reference (original obejct)
        cout << "\nCustom Copy Constructor: " <<endl;
        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->subject = orgObj.subject;
        this->salary = orgObj.salary;
    }

    void displayInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Department: " << dept << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    //Non-Parameterized Conatructor Call
    Teacher t1;
    t1.displayInfo();
    cout << endl;

    //Parameterized Conatructor Call
    Teacher t2("Nayem", "CSE", "DSA", 55555.55);
    t2.displayInfo();

    //Default Copy Constructor
    Teacher t3(t2);     //Default Copy Constructor invoke (called)
    cout << "\nDefault Copy Constructor" <<endl;
    t3.displayInfo();

    //Custom copy constructor
    Teacher t4(t2);
    t4.displayInfo();
    return 0;
}