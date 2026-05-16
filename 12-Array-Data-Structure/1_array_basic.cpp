/*
data stored in array in cpp must be same type
**In js array can store different types of data at once

-Arraoy is contiguous in memory
-Also it is leniar
*/

#include<iostream>
using namespace std;

int main(){
    //array declaration
    int marks[5] ={30, 50, 55, 66,77};
    double price[] ={33.55, 55, 44.5, 444};

    //accessing
    cout << marks[4] <<endl;
    
    int size = sizeof(price) / sizeof(double);

    for(int i=0; i < size; i++){
        cout << price[i] <<" " ;
    }
    return 0;
}