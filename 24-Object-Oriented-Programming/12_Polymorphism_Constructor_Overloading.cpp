/*Polymorphism is an Object-Oriented Programming (OOP) concept that means
    “one interface, multiple behaviors.”

In C++, polymorphism allows the same function name, operator, or method to perform different actions depending on the situation (data type or object type).

It increases flexibility, reusability, and scalability of programs because we can write general code and let C++ decide the specific behavior.
*/

/*
Types of Polymorphism in C++
    There are two main categories:
        1. Compile-Time Polymorphism (Static Polymorphism)
            Types:
                1) Function Overloading
                2) Constructor Overloading
                3) Operator Overloading
                ***same name but preamerer different for fuction overloading, or same name, no. of parameter same, but parameter data type different.
        2. Run-Time Polymorphism (Dynamic Polymorphism)
*/

/*
Polymorphism is the ability of a function, operator, or object to take multiple forms depending on context, achieved in C++ through compile-time (overloading) and run-time (overriding using virtual functions) techniques.
*/

#include<iostream>
#include<string>
using namespace std;

class Student {
public: 
    string name;

    //Polymorphism
    Student(){
        cout << "This is default constructor(Non-Parameterized)\n";
    }

    Student (string name){      //Constructor Overloading
        this->name = name;
        cout << "Parametersized Constructor\n";
    }
};


int main (){
    //For Constructor Overloading
    cout << "First object:\n";
    Student s1;             //Non-parameterized constructor call

    cout << "\nSecond object:\n";
    Student s2("Nayem");    //parameterized constructor call
    return 0;
}