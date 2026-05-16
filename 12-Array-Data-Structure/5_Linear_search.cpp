#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i] == target){
            return 1;
        }
    }

    return -1;
}
int main()
{
    int x;
    cout << "Enter targeted number:";
    cin >> x;

    int arr[] = { 33, 44, 55, 66 };
    if(linearSearch(arr, 4, x) == 1){
       cout << "Target found";
    }else{
        cout << "Target not found";
    };
}