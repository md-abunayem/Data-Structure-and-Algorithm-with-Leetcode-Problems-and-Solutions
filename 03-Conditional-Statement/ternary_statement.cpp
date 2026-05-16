#include<iostream>
using namespace std;

int main(){
    
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << (number > 0 ? "Positive Number" : "Negative Number or Zero") << endl;

    return 0;
}