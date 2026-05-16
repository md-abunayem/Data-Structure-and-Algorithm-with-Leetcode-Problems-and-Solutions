//special type of variavle stored address of another variable

#include<iostream>
using namespace std;


int main(){
    int a = 10; 
    int* ptr = &a;

    cout << ptr <<endl; //same as below statement
    cout << &a <<endl;  //same as previous statement

    cout << &ptr << endl; //different memory address

    return 0;
}