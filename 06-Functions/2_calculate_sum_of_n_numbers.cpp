#include<iostream>
using namespace std;

//calculate sum
double calculateSum(int num){
    double sum = 0;
    for(int i = 0; i<=num ; i++){
        sum += i;
    }
    return sum;
}

int main(){
    double result = calculateSum(7);
    cout << "Result is:" << result;
}