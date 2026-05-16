#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    std::vector<int> arr = {1, 2, -6, 7, 8, -3, 5};

    int maxSum = INT_MIN;
    int currSum = 0;

    // Kadane's algorithm, O(n)
    for (const int& val : arr) {
        currSum += val;
        maxSum = std::max(currSum, maxSum);

        if (currSum < 0) {
            currSum = 0;
        }
    }

    cout << "Maximum subarray sum: " << maxSum << endl;
    return 0;
}