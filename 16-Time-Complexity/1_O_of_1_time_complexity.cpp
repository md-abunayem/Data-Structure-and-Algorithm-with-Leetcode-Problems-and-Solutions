#include <iostream>
#include <vector>
using namespace std;

// O(1) Time, O(1) Space
int getFirstElement(const vector<int>& arr) {
    return arr[0]; // Single operation regardless of array size
}

// O(1) Time, O(1) Space
bool isEven(int n) {
    return n % 2 == 0; // Single operation
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    cout << "First element: " << getFirstElement(nums) << endl;
    cout << "Is 10 even? " << isEven(10) << endl;
    return 0;
}