#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int target)    //iterative code of binary search 
{
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }else if(arr[mid] < target){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }

    return -1;
}

int main()
{
    vector<int> arr = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int target;
    cout << "Enter the target value to search: ";
    cin >> target;

    cout << binarySearch(arr, target);

    return 0;
}