#include<iostream>
using namespace std;


//A pointer that does not point to any location(null pointer)
//We can not dereference null pointer

int main(){
    int* ptr;   
    cout << ptr <<endl;  //return garbase value

    int **ptr2 = NULL;   //or int *ptr2 = NULL
    cout << ptr2 << endl;   //return value as 0

    return 0;
}