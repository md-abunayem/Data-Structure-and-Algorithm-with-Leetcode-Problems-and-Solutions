#include<iostream>
#include<vector>
using namespace std;

int peakIndexInMountainArr(vector<int> &arr ){

    int start = 1;
    int end = arr.size() - 1;

    while(start <= end){
        int mid = start + (end - start) / 2;

        if(arr[mid] > arr[mid - 1] && arr[mid+1] <arr[mid]){
            return mid;
        }else if(arr[mid - 1] < arr[mid]){   //right
            start = mid + 1;
        }else{   //left
            end = mid -1;
        }
    }

    return -1;
}
int main(){


    return 0;
}