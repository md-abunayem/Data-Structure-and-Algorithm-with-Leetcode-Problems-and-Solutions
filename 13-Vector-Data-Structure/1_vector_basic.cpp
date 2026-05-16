#include<iostream>
#include<vector>
using namespace std;


int main(){
    //Declaration
    // vector <int> vec;
    // vector<int> vec(3,0);
    vector <int> vec ={1,2,3};

    //access value
    // cout <<vec[2] << endl;

    //using for-each loop
    for(int val : vec){
        cout << val << " ";
    }
    cout << endl;

}


/*
If there is any error then we have to use the below command to run:
g++ -std=c++11 fileName.cpp && ./a.out
*/