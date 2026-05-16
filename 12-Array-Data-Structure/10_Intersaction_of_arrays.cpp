#include <iostream>
using namespace std;

void intersection(int arr1[], int size1, int arr2[], int size2)
{
    cout << "Intersection: ";

    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
                break;   // stop checking once match is found
            }
        }
    }
}

int main()
{
    int arr1[] = {10, 20, 30, 40, 50};
    int arr2[] = {30, 40, 60, 70};

    int size1 = sizeof(arr1) / sizeof(int);
    int size2 = sizeof(arr2) / sizeof(int);

    intersection(arr1, size1, arr2, size2);

    return 0;
}
