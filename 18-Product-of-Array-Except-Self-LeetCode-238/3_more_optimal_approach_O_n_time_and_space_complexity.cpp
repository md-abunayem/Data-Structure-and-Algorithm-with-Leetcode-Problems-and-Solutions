#include <iostream>
#include <vector>
using namespace std;

vector<int> productOfArray(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans(n, 1);

    // prefix;
    int prefix = 1;
    for (int i = 1; i < n; i++)
    {
        prefix *= nums[i - 1];
        ans[i] *= prefix;
    }

    // suffix
    int suffix = 1;
    for (int j = n - 2; j >= 0; j--)
    {
        suffix *= nums[j + 1];
        ans[j] *= suffix;
    }


    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    vector<int> ans = productOfArray(nums);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}