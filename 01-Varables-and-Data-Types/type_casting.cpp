#include<iostream>
using namespace std;

int main(){
    //defination: Type casting is the process of converting a variable from one data type to another data type.
    //There are two types of type casting in C++:
    //1. Implicit Type Casting(conversion)
    //2. Explicit Type Casting(casting)

    //1. Implicit Type Casting: It is automatically done by the compiler when a variable is assigned to another variable of a different data type.
    int num = 10;
    float decimalNum = num; // Implicit type casting from int to float  
    cout << "Integer: " << num << endl;
    cout << "Float: " << decimalNum << endl;

    char grade = 'A';
    int value = grade; // Implicit type casting from char to int
    cout << "Character: " << grade << endl; // ASCII value of 'A' is 65
    cout << "Integer (ASCII value): " << value << endl;


    //2. Explicit Type Casting: It is done by the programmer using the cast operator.
    float decimalNum2 = 20.5;
    int num2 = (int)decimalNum2; // Explicit type casting from float to int
    cout << "Float: " << decimalNum2 << endl;


    cout << (5/(double)2); // Explicit type casting from int to double
    
    return 0;
}