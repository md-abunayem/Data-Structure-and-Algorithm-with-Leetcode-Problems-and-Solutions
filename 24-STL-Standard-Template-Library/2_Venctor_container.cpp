/*
📘 vector in C++:
vector is a dynamic array in C++.
It can grow and shrink automatically.

🔹 Why Use Vector?
✔ Size can change dynamically
✔ Fast access using index
✔ Many built-in functions
✔ Safer than normal array

Function            ->	    Use
push_back(x)	      Add element at end
emplace_back()        Constructs object directly in vector (works like same as push_back)
pop_back()	          Remove last element
size()	              Number of elements currently in vector
capacity()            Total memory allocated
empty()	              Check if empty
clear()	              Remove all elements
front()	              First element
back()	              Last element
at(i), vec[idx]       Access element safely
*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;   //size=0

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.emplace_back(6);   //works same as push_back

    cout << "Size of the vector: " << vec.size() << "\n";
    cout << "Capacity: " << vec.capacity() << "\n";

    cout << "\nElements at the vector: ";
    for(int val : vec){
        cout << val << " ";
    }

    vec.pop_back();    //delete element from the end 

    cout << "\nAfter applying pop_back(): ";
    for(int val : vec){
        cout << val << " ";
    }

    //access element at the vector
    cout << "\nValue at idx 2: " << vec[2] << " or " << vec.at(2) << endl;

    //access first and last element
    cout << "\nFirst element: " << vec.front() << endl;
    cout << "Last element: " << vec.back() << endl;
}