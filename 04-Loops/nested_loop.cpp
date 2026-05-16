#include<iostream>
using namespace std;

int main(){
    for(int i = 1; i<=5; i++){
        for(int j = 1; j<=7; j++){
           cout << "* ";
        }
        cout << endl; // Move to the next line after inner loop
    }
    return 0;
}