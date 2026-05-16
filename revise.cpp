#include<iostream> 
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int max_sum = INT_MIN;

    for(int st = 0; st < 5; st++){
        int curr_sum = 0;
        for(int end = st; end < 5; end ++){
            curr_sum += arr[end];
            max_sum = max(max_sum, curr_sum);
        }
    }

    cout << max_sum;
}