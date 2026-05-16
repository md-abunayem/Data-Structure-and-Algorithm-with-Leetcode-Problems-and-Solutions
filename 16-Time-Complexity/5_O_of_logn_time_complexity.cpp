#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,77};
    int target;

    cout << "Enter the target:" <<endl;
    cin >> target;

    int start = 0;
    int end = arr.size() - 1;
    bool found = false;
    
    while(start <= end ){
        int mid = start + (end - start) / 2;

        if(arr[mid] == target){
            cout << "Targeted value is found: " << arr[mid];
            found = true;
            break;
        }else if(arr[mid] < target ){
            start = mid + 1;
        }else{
            end = mid -1;
        }
    }

    if(!found){
        cout << "Target " << target << " not found in the array." << endl;
    }
}