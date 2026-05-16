
#include<iostream>
using namespace std;


int main(){
    int a = 10; 
    int* ptr = &a;
    int** ptr2 = &ptr;

    cout << &ptr << endl; //address pointer ptr
    cout << ptr2 << endl; // address of pointer ptr

    cout << &ptr2 << endl; //address of ptr2 

    return 0;
}