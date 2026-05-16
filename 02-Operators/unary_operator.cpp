#include<iostream> 
using namespace std;

int main(){

    // Unary Operator: An operator that operates on a single operand to produce a new value.
    // Types of Unary Operators:
    // 1. Unary Plus (+): Indicates a positive value. It is optional and has no effect on the value.
    // 2. Unary Minus (-): Negates the value of its operand.
    // 3. Increment Operator (++) : Increases the value of its operand by 1.
    //    a. Pre-increment (++var): Increments the value before it is used in an expression.
    //    b. Post-increment (var++): Increments the value after it is used in an expression.
    // 4. Decrement Operator (--) : Decreases the value of its operand by 1.
    //    a. Pre-decrement (--var): Decrements the value before it is used  in an expression.
    //    b. Post-decrement (var--): Decrements the value after it is used in an expression.    
        
    int a = 10;
    int b = a++;

    cout << b <<endl;
    cout << a <<endl;

    int c = 20;
    int d = c--;
    cout << d <<endl;
    cout << c <<endl;

    int e = 5;
    int f = ++e;
    cout << f <<endl;
    cout << e <<endl;

    int g = 15;
    int h = --g;
    cout << h <<endl;   
    cout << g <<endl;

    return 0;
}