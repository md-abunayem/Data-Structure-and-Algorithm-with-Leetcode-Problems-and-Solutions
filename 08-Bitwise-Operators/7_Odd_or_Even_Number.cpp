#include<iostream>
using namespace std;

bool isOddOrEven(int n){

    return n & 1 == 1;    //bitwise and....7 = 111, 1 = 001....then bitwise & applied__result = 001 bin = 1 in decimal
}

int main(){
    int n = 7;
    bool result = isOddOrEven(n);

    if(result){
        cout << "Odd Number";
    }else {
        cout << "Even Number";
    }
    return 0;
}