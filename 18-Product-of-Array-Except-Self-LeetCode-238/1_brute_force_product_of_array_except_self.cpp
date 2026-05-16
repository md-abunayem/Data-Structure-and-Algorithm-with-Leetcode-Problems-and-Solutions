#include <iostream>
#include <vector>
using namespace std;

vector<int> productOfArray(vector<int> &nums){
    vector<int> ans;

    for(int i = 0; i < nums.size(); i++){
        int currProduct = 1;
        for(int j = 0; j < nums.size(); j++){
            if(nums[i] == nums[j]){
                continue;
            }
            currProduct *= nums[j];
        }
        ans.push_back(currProduct);
    }

    return ans;
};

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    vector<int> ans = productOfArray(nums);

    for(int i = 0; i < ans.size() ; i++){
        cout << ans[i] << " ";
    }
}