/*
Polymorphism is the ability of a function, operator, or object to take multiple forms depending on context, achieved in C++ through compile-time (overloading) and run-time (overriding using virtual functions) techniques.
*/

#include<iostream>
#include<string>
using namespace std;

class Print {
public:
    void show(int number){
        cout << "Int number: " << number <<endl;
    }

    void show(char ch){             //Fuction overloading
        cout << "Character: " << ch << endl;
    }

};

//Fuction overloading
int main(){

    Print p1;
    p1.show(334);    //called show function with int parameter

    p1.show('&');   //called show function with char parameter

    return 0;
}