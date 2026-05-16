#include<iostream>
using namespace std;

int main(){
    cout<<"For loop in C++:"<<endl;
    // for loop
    for(int i=0; i<5; i++){
        cout<<i<<" ";
    }
    cout<<endl;

    // for loop with array
    int arr[] = {1,2,3,4,5};
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // for loop with string
    string str = "Hello";
    for(int i=0; i<str.length(); i++){
        cout<<str[i]<<" ";
    }

    return 0;
}