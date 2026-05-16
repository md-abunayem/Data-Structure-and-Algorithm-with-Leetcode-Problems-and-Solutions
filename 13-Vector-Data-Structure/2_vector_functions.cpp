#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector <int> vec ={1,2,3};

    //size
    cout << "Size:" << vec.size() << endl;  //Size:3

    //push_back()
    vec.push_back(33);
    vec.push_back(63);
    vec.push_back(38);

    cout << "Size:" << vec.size() << endl;

    vec.pop_back();
    vec.pop_back();

    cout << "Size:" << vec.size() << endl;

    //front()  ->   access first value of the vector
    cout << "First val: " << vec.front() <<endl;

    //back()  ->   access last value of the vector
    cout << "First val: " << vec.back() <<endl;

    //at(index)  ->  access specific positioned value
    cout << "Value at index "  << 2 << " :" << vec.at(2) << endl;
}


/*
If there is any error then we have to use the below command to run:
g++ -std=c++11 fileName.cpp && ./a.out
*/