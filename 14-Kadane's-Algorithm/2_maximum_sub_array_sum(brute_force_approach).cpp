#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int maxSum = INT_MIN;

    //Brute force approach , O(n^2)
    for (int start = 0; start < arr.size(); start++)
    {
        int currentSum = 0;
        for (int end = start; end < arr.size(); end++)
        {
            currentSum += arr[end];
            maxSum = max(currentSum, maxSum);
        }
    }

    cout << "maximum sub array sum:" << maxSum;
}