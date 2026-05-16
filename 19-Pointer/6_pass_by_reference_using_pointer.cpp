#include<iostream>
using namespace std;

void changeA(int* ptr){
    *ptr = 20;  //a = 10 -> 20  dereferencing(change value at address of a)
}
int main(){
    int a =  10;
    int* ptr = &a;
    
    changeA(ptr);
    cout << "Inside main fnx: " << a <<endl;

    return 0;
}