#include<iostream>
using namespace std;

//calculate sum
double calculateFactorial(int number){
    int fact = 1;
    for(int i=1; i <=number ; i++){
        fact *= i;
    }
    return  fact;
}

int nCr(int n, int r){
    int fact_of_n =calculateFactorial(n);
    int fact_of_r = calculateFactorial(r);
    int fact_of_n_minus_r = calculateFactorial(n-r);

    int result = fact_of_n /(fact_of_r * fact_of_n_minus_r );

    return result;
}

int main(){
    int n, r;
    cout << "Enter the values of n and r: ";
    cin >> n >> r;

    int result = nCr(n, r);
    cout << "Result : " <<result;

}