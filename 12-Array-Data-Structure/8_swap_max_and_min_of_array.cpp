#include <iostream>
using namespace std;

int swapMaxMin(int arr[], int size){
    int smallestIdx = 0;
    int largestIdx = 0;

    for(int i = 0; i< size; i++){
        if(arr[i]<arr[smallestIdx]){
            smallestIdx = i;
        }
        if(arr[i]>arr[largestIdx]){
            largestIdx = i;
        }
    }

    swap(arr[smallestIdx], arr[largestIdx]);
}

int main()
{
    int arr[] = {55, 33, 55, 66, 2, 5, 333, 3, 55, 777, 3};
    int size = sizeof(arr) / sizeof(int);

    swapMaxMin(arr, size);

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}