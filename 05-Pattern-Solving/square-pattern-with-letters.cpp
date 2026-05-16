#include<iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i= 0; i < rows; i++){
        char ch = 'A';
        for(int j = 0; j < rows; j++){
            cout << ch << " ";
            ch ++;
        }
        cout << endl; // Move to the next line after inner loop
    }
}