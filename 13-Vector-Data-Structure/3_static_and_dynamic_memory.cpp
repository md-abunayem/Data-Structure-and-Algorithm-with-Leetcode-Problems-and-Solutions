#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;

    // push_back()
    vec.push_back(33);
    vec.push_back(63);
    vec.push_back(63);

    // size and capacity
    cout << "Size is: " << vec.size() << endl;
    cout << "Capacity is: " << vec.capacity() << endl;

    // let consider another vector
    cout << "For second vector: " << endl;

    vector<int> vec2;

    vec2.push_back(33);
    vec2.push_back(63);
    vec2.push_back(38);
    vec2.push_back(63);
    vec2.push_back(38);

    // size and capacity
    cout << "Size is: " << vec2.size() << endl;
    cout << "Capacity is: " << vec2.capacity() << endl;
}

/*
Vector Size and Capacity in C++
std::vector manages a dynamic array internally. Two key properties are:

1. size()
Returns the number of elements currently stored in the vector.
It is the logical size of the vector.

2. capacity()
Returns the total number of elements the vector can store without reallocation.
It is the allocated memory size, not the number of elements stored.
Capacity is always >= size.
When elements exceed capacity, the vector automatically grows (usually doubling the capacity).

*/