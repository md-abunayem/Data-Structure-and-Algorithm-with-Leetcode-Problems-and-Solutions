#include <iostream>
#include <vector>
using namespace std;

int calculateMostWater(vector<int> &height)
{

    int maxWater = 0;
    int left = 0;
    int right  = height.size() - 1;

    while(left < right){
        int wt = right - left;
        int ht = min(height[left], height[right]);
        int currWater = ht * wt;
        maxWater = max(currWater, maxWater);

        if(height[left] < height[right]){
            left ++;
        }else{
            right--;
        }

    }
    return maxWater;
}
int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    cout << calculateMostWater(height);
}