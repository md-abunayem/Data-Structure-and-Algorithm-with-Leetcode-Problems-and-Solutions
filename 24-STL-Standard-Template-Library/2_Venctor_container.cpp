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

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // declaration
    vector<int> vec; // size=0
    vector<int> vec1 = {1, 2, 3, 4, 5};
    vector<int> vec2(10, 0); // 10 size of vector initialized with value 0 => used in dynamic programming (DP)
    vector<int> vec3(vec2);

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.emplace_back(6); // works same as push_back

    cout << "Size of the vector: " << vec.size() << "\n";
    cout << "Capacity: " << vec.capacity() << "\n";

    cout << "\nElements at the vector: ";
    for (int val : vec)
    {
        cout << val << " ";
    }

    // delete element from the end
    vec.pop_back();

    cout << "\nAfter applying pop_back(): ";
    for (int val : vec)
    {
        cout << val << " ";
    }

    // access element at the vector
    cout << "\nValue at idx 2: " << vec[2] << " or " << vec.at(2) << endl;

    // access first and last element
    cout << "\nFirst element: " << vec.front() << endl;
    cout << "Last element: " << vec.back() << endl;

    // empty()
    cout << vec.empty() << endl; // 0=> false, 1 => true

    vector<int> vec4(5, 10);
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;

    // clear()
    vec4.clear();
    cout << vec4.empty() << endl; // 1 => true

    vec4.push_back(1);
    vec4.push_back(10);
    vec4.push_back(144);
    vec4.push_back(1666);

    // erase(first_iterator, last_iterator)
    vec4.erase(vec4.begin() + 2, vec4.begin() + 3);

    for (int val : vec4)
    {
        cout << val << " ";
    }
    cout << endl;

    // insert(iterator, value)
    vec4.insert(vec4.begin() + 2, 4444); //
    for (int val : vec4)
    {
        cout << val << " ";
    }


    
}