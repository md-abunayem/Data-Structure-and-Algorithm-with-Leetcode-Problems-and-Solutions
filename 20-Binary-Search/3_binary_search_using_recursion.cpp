#include <iostream>
#include <vector>
using namespace std;

int recBinarySearch(vector<int> arr, int target, int st, int end)
{

    if (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (arr[mid] < target)
        {
            return recBinarySearch(arr, target, mid + 1, end);
        }
        else if (arr[mid] > target)
        {
            return recBinarySearch(arr, target, st, mid - 1);
        }
        else
        {
            return mid;
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

    cout << recBinarySearch(arr, target, 0, arr.size() - 1) << endl;

    return 0;
}