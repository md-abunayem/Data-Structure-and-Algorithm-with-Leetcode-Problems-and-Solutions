#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};

    cout << arr <<endl;  //pointer(store the address of first element)
    cout << *arr << endl; // value: 1


    //constant pointer(can not store other variables address to and arr variable)
    // int a = 10;
    // arr = &a;  //will throw error


    return 0;
}