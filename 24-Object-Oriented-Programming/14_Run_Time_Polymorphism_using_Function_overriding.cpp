/*
Run-time polymorphism means:

    The function that will execute is decided during program execution, not during compilation.

It is also called Dynamic Binding or Late Binding.

In C++, it is achieved using:
    1. Inheritance
    2. Function Overriding
    3. virtual function
    4. Base class pointer
*/

/*
Function Overriding:
Parent & Child both contain the same function with different implementation.

The parent class function is said to be overridden.
*/

#include <iostream>
#include <string>
using namespace std;

class Parent
{
public:
    void getInfo()
    {
        cout << "Parent class\n";
    }
};

class Child : public Parent
{
public:
    void getInfo()
    {
        cout << "Child class\n";
    }
};

int main()
{
    Child c1;
    c1.getInfo();    //called child class function because it override the parent class function and it has higher priority
    return 0;
}