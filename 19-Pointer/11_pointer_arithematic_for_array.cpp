#include<iostream>
using namespace std;

//increment(++) / decrement(--)
//add / substract number(based on memory size of varible types)
int main(){
    int arr[] = {10, 20, 30, 40};
    int *ptr = arr;

    cout << *(ptr + 1) << endl;  //20
    cout << *(ptr + 3) << endl;  //40
    ptr++;  //address of 20
    cout << *ptr << endl; //20

    return 0;
}