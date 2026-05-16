#include<iostream>
using namespace std;

//calculate sum
double calculateFact(int num){
    int fact = 1;
    for(int i=1; i<=num; i++){
        fact *= i;
    }   

    return fact;
}

int main(){
    double result = calculateFact(5);
    cout << "Result is:" << result;
}