/*
Definition:

Pass by reference means passing the actual variable to a function, not a copy of it.
Inside the function, when you modify the parameter, the original variable in the caller also gets modified.

This is done using the reference operator & in the function parameter list.

Why Use Pass by Reference?
To modify the original variable inside a function.
To avoid copying large objects, improving performance.
To return multiple values from a function without using return statements.
*/

#include <iostream>
using namespace std;

void changeArr(int arr[], int size)
{
    for (int i = 0; i < 3; i++)
    {
        arr[i] *= 2;
    }
}

int main()
{

    int arr[] = {1, 2, 3};
    changeArr(arr, 3);

    cout << "In main array:" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " "; // 2 4 6 (updated at the changeArr function)
    }
}