#include <iostream>
#include <vector>
using namespace std;

// O(n) Time, O(1) Space
int findMax(const vector<int>& arr) {
    int maxVal = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

// O(n) Time, O(1) Space
int calculateSum(const vector<int>& arr) {
    int sum = 0;
    for (int num : arr) {
        sum += num;
    }
    return sum;
}

// O(n) Time, O(n) Space
vector<int> copyAndDouble(const vector<int>& arr) {
    vector<int> result(arr.size());
    for (int i = 0; i < arr.size(); i++) {
        result[i] = arr[i] * 2;
    }
    return result;
}

int main() {
    vector<int> nums = {4, 2, 9, 7, 5};
    cout << "Max value: " << findMax(nums) << endl;
    cout << "Sum: " << calculateSum(nums) << endl;
    
    vector<int> doubled = copyAndDouble(nums);
    cout << "Doubled values: ";
    for (int num : doubled) cout << num << " ";
    cout << endl;
    
    return 0;
}