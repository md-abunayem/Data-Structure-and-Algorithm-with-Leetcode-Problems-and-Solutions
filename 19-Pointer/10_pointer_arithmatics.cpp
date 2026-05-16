#include<iostream>
using namespace std;

//increment(++) / decrement(--)
//add / substract number(based on memory size of varible types)
int main(){
    int a =  10;
    int* ptr = &a;

    cout << ptr << endl; //0x61ff08
    ptr++;               // +4(9,a,b,c)
    cout <<  ptr <<endl; //0x61ff0c
    ptr--;               //-4(b,a,9,8)
    cout << ptr << endl; //0x61ff08

    ptr = ptr + 2;  //add 2 int (8bytes)
    cout << ptr << endl;  //0x61ff10

    cout << endl;
    cout << "substract using 2 pointers:" << endl;
    int* ptr3;  //100(as address assume)
    int* ptr4 = ptr3 + 2; //108(address after calculation)
    cout << ptr4 - ptr3 << endl;  //2(no. of  blocks of type (int))


    //Comparision
    cout <<endl;
    cout << "Comparison: " << endl;
    cout << ptr3 << endl;   //0x61ff54
    cout << ptr4 << endl;   //0x61ff5c
    
    cout << (ptr3 < ptr4) <<endl;   //true(1)

    return 0;
}