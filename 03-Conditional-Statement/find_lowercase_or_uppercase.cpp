#include<iostream>
using namespace std;

int main(){

    char ch;
    cin >> ch;

    if(ch >= 'a' && ch <= 'z'){
        cout << ch << " is a lowercase letter." << endl;
    }
    else if(ch >= 'A' && ch <= 'Z'){
        cout << ch << " is an  letter." << endl;
    }
    else{
        cout << ch << " is neither a lowercase nor an uppercase letter." << endl;
    }

}