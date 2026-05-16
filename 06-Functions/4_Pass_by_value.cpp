#include <iostream>
using namespace std;
/*
Definition

When a function is called pass by value, the function receives a copy of the original variable’s value.

Any changes made to the parameter inside the function do not affect the original variable outside the function.*/
// calculate sum
void changeX(int x)
{
    x = 2 * x;
    cout << "x at changeX: " << x << endl;
}

int main()
{
    int x = 10;
    changeX(x);

    cout << "x at main funtion: " << x << endl;
}