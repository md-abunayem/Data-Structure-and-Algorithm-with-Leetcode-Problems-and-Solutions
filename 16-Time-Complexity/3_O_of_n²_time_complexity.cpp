#include <iostream>
#include <vector>
using namespace std;

// O(n²) Time, O(1) Space
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// O(n²) Time, O(1) Space
void printAllPairs(const vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            cout << "(" << arr[i] << ", " << arr[j] << ") ";
        }
    }
    cout << endl;
}

int main() {
    vector<int> nums = {64, 34, 25, 12, 22, 11, 90};
    
    cout << "All pairs: ";
    printAllPairs(nums);
    
    bubbleSort(nums);
    cout << "After bubble sort: ";
    for (int num : nums) cout << num << " ";
    cout << endl;
    
    return 0;
}