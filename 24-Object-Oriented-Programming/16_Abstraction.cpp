/*
Abstraction:
Hiding all unnecessary details & showing only the important parts

Abstract Class Properties:
using Abstract Classes
    1. Abstract classes are used to provide a base class from which other classes can be derived.
    2. They cannot be instantiated(can not create object from abstract class) and are meant to be inherited.
    3. Abstract classes are typically used to define an interface for derived classes.
*/

#include<iostream>
#include<string>
using namespace std;

//Abstract Class-> It becomes a blueprint only to other class (derived class) and you can not create object
class Shape {   
    virtual void draw() = 0; 
    
    
    //Pure virtual Function (Pure Virtual Function Must be implemented by child)
    /*
    What does = 0 mean?
        It means:
        This function has NO BODY here.
        Child classes MUST implement it.

    This is called a Pure Virtual Function
*/
};

class Circle : public Shape {
public:
    void draw (){
        cout << "Drawing a Circle\n";
    }
};

int main(){
    Circle c1;
    c1.draw();
    return 0;
}