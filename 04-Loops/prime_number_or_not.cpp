#include<iostream>
using namespace std;

int main(){
    int number;
    cout << "Enter number: ";
    cin >> number;

    if (number <= 1) {
        cout << number << " is not a prime number" << endl;
        return 0;
    }

    if(number == 2 ){
        cout << number << " is a prime number" << endl;
        return 0;
    }

    bool isPrime = true;
    // for(int i = 2; i < number; i++){
    //     if(number % i == 0){
    //        isPrime = false;
    //        break;
    //     } 
    // }

    //optimized version
    for(int i = 2; i*i <= number; i++){
        if(number % i == 0){
           isPrime = false;
           break;
        } 
    }

    //why i*i <= number?
    //because if number = a*b and both a and b are greater than sqrt(number)    
    //then a*b will be greater than number
    //so at least one of those factors must be less than or equal to sqrt(number)
    

    if(isPrime){
        cout << number << " is a prime number" << endl;
    } else {
        cout << number << " is not a prime number" << endl;
    }

    return 0;
}