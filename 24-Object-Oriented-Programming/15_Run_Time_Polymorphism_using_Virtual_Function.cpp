/*
• Virtual Functions
A virtual function is a member function that you expect to be redefined in derived classes.

• Virtual Functions Properties:
    1. Virtual functions are Dynamic in nature (called and excecute in run-time).
    2. Defined by the keyword "virtual" inside a base class and are always declared with a base class and overridden in a child class.
    3. A virtual function is called during Runtime
*/

#include <iostream>
#include <string>
using namespace std;

class Parent
{
public:
    virtual void getInfo()          //Virtual Function
    {
        cout << "Parent class\n";
    }
};

class Child : public Parent
{
public:
    void getInfo()      //Again declared in child class
    {
        cout << "Child class\n";
    }
};

int main()
{
    Child c1;
    c1.getInfo();    //It is worked almost like function overriding
    return 0;
}