#include<iostream>
using namespace std;

int main(){
    double price[] ={33.55, 55, 44.5, 444};
    
    int size = sizeof(price) / sizeof(double);

    double largest = INT8_MIN;
    for(int i=0; i < size; i++){
        // if(price[i] > largest){
        //     largest = price[i];
        // }
        //using built in function min
        largest = max(price[i], largest);
    }

    cout << "Max number is: " << largest;
    return 0;
}