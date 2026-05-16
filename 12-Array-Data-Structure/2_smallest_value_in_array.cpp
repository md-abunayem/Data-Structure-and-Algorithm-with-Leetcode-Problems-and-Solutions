#include<iostream>
using namespace std;

int main(){
    double price[] ={33.55, 55, 44.5, 444};
    
    int size = sizeof(price) / sizeof(double);

    double smallest = INT8_MAX;
    for(int i=0; i < size; i++){
        // if(price[i] < smallest){
        //     smallest = price[i];
        // }
        //using built in function min
        smallest = min(price[i], smallest);
    }

    cout << "Smallest number is: " << smallest;
    return 0;
}