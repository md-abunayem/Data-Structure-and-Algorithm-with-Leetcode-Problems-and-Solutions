#include<iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    int number = 1;
    for(int i= 0; i < rows; i++){
        for(int j = 0; j <= i; j++){
            cout << number << " ";
            number ++;
        }
        cout << endl; 
    }
    return 0;
}