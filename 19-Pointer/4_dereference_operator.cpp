// dereference operator -> *
// It means -> value at address

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;
    int **ptr2 = &ptr;

    cout << "Value at address of a: " << *(&a);

    cout << *(ptr) << endl;   // 10
    cout << *(ptr2) << endl;  // address of a
    cout << ptr << endl;      // address of a
    cout << **(ptr2) << endl; // 10

    return 0;
}