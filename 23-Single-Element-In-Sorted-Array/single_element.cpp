#include<iostream>
#include<vector>
using namespace std;

int findSingleElement(vector<int> arr){
    int n = arr.size();

    if(n == 1) return arr[0];

    int st = 0;
    int end = n - 1;

    while(st <= end){
        int mid = st + (end - st) / 2;

        //edge cases
        if(mid == 0 && arr[0] != arr[1]){
            return arr[mid];
        }
        if(mid == end && arr[end] != arr[end-1]){
            return arr[mid];
        }

        //return actual value at mid
        if(arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1]){
            return arr[mid];
        }

        if(mid % 2 == 0){   //mid at even position at arr
            if(arr[mid] == arr[mid-1]){ //left
                end = mid -1;
            }else{                      //right 
                st = mid + 1;
            }
        }else{   //mid at odd position(mid % 2 !=0)
            if(arr[mid] == arr[mid -1]){    //right
                st = mid + 1;
            }else{                          //left
                end = mid -1;
            }
        }
    }

    return -1;
}

int main(){
    vector<int> arr = {1,1,2,3,3,4,4,8,8};
    cout <<  findSingleElement(arr);
} 