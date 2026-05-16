#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if(arr[mid] == target){
            return mid;
        }

        if(arr[start] <= arr[mid]){   //left sorted
            if(arr[start] <= target && target <= arr[mid]){
                 end = mid - 1;
            }else{
                start = mid + 1;
            }
        }else{   //right sorted
            if(arr[mid] <= target && target <= arr[end]){
                start = mid + 1;
            }else{
                end = mid - 1;
            }
        }
    }

    return -1;
}

int main()
{
    vector<int> arr = {15, 17, 19, 1, 3, 5, 7, 9, 11, 13};
    int target;
    cout << "Enter the target value to search: ";
    cin >> target;

    cout << binarySearch(arr, target);

    return 0;
}