#include <iostream>
using namespace std;

void uniqueValuesInArray(int arr[], int size)
{
    int uniqueArr[size];

    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count ++;
            }
        }

        if(count ==  1){ // only print if it occurs once(1 because one time it compare with itself)
            cout << arr[i] << " ";
        }
    }

}

int main()
{
    int arr[] = {55, 44,44, 77, 34, 66, 88, 99};
    int size = sizeof(arr) / sizeof(int);

    uniqueValuesInArray(arr, size);
}