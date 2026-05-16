#include<iostream>
using namespace std;

void changeA(int &b){   // & means here "b is a reference to"
    b = 20;  //a = 10 -> 20
}
int main(){
    int a =  10;
    
    changeA(a);
    cout << "Inside main fnx: " << a <<endl;

    return 0;
}