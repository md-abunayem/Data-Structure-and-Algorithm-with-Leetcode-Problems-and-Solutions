#include <iostream>
using namespace std;

void kadane(int arr[], int n){
    int currentSum = 0;
    int maxSum = INT_MIN;

    int start = 0, end = 0, tempStart = 0;

    for(int i = 0; i < n; i++){
        currentSum += arr[i];

        if(currentSum > maxSum){
            maxSum = currentSum;
            start = tempStart;
            end = i;
        }

        if(currentSum < 0){
            currentSum = 0;
            tempStart = i + 1;
        }
    }

    cout << "Max Sum: " << maxSum << endl;
    cout << "Start Index: " << start << endl;
    cout << "End Index: " << end << endl;
}

int main(){
    int arr[] = {-2,-3,4,-1,-2,1,5,-3};
    int n = sizeof(arr)/sizeof(arr[0]);

    kadane(arr,n);

    return 0;
}