#include<iostream>
using namespace std;

int main(){
    int a = 10;
    float b = 20.5;
    char c = 'A';
    double d = 30.123456;
    bool isTrue = true;

    cout << "Integer: " << a << endl;
    cout << "Float: " << b << endl;
    cout << "Character: " << c << endl;
    cout << "Double: " << d << endl;
    cout<<"Boolean:" << isTrue << endl;


    cout<< "\n\n";
    cout << "Size of Integer:" <<sizeof(a) << "bytes" << endl;
    cout << "Size of Float:" <<sizeof(b) << "bytes" << endl;
    cout << "Size of Character:" <<sizeof(c) << "bytes" << endl;    
    cout << "Size of Double:" <<sizeof(d) << "bytes" << endl;
    cout << "Size of Boolean:" <<sizeof(isTrue) << "bytes" << endl;

    return 0;
}