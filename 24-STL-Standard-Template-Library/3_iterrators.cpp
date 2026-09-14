#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8};

    // vec.begin();
    auto iterator = vec.begin(); // indicates the first element of vector, map, set etc;

    cout << *(iterator) << endl; // workd like pointer

    // vec.end() => points the index after last element index
    cout << *(vec.end()) << endl; // returns 0
    cout << *(vec.end() - 1);     // returns last element of the vector
    cout << endl;

    // loop
    vector<int>::iterator it;
    for (it = vec.begin(); it != vec.end(); it++)
    {
        cout << *(it) << " ";
    }

    cout << endl;

    // Reverse iterator
    vector<int>::reverse_iterator it1; // use "auto" as keyword which atomatically determines the data type of a variable based on the assingned value

    // loop
    for (it1 = vec.rbegin(); it1 != vec.rend(); it1++)
    {
        cout << *(it1) << " "; // 8,7,6,5,4,3,2,1
    }
    cout << endl;

    return 0;
}