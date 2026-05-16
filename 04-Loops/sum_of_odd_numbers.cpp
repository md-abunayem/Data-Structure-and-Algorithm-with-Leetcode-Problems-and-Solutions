#include<iostream>
using namespace std;

int main(){
    
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int sum = 0;

    for(int i = 1; i <= number; i++){
        if(i % 2 != 0){
            sum += i;
        }
    }

    cout << "Sum of odd numbers from 1 to " << number << " is: " << sum << endl;


    return 0;
}