#include <iostream>
using namespace std;

int calculateSum(int arr[], int size){
    int sum = 0;
    for(int i =0; i< size; i++){
        sum+=arr[i];
    }

    return sum;
}
int calculateProduct(int arr[], int size){
    int product = 1;
    for(int i =0; i< size; i++){
        product*=arr[i];
    }

    return product;
}

int main()
{
    int arr[] = {55, 44, 77, 34, 66, 88, 99};
    int size = sizeof(arr) / sizeof(int);

    cout << "Sum of array:" << calculateSum(arr, size) <<endl;
    cout << "Product of array:" << calculateProduct(arr, size);
}