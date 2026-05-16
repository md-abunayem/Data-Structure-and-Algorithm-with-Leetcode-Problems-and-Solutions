#include<iostream>
using namespace std;

//calculate sum
double calculateSum(int num1, float num2){
    return num1+num2;
}

int main(){
    double result = calculateSum(5,8.6);
    cout << "Result is:" << result;
}