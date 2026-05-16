#include <iostream>
#include <vector>
using namespace std;

vector<int> productOfArray(vector<int> &nums)
{
    int n = nums.size();
    vector<int> prefix(n, 1), suffix(n, 1), ans(n, 1);

    // prefix;
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }

    // suffix
    for (int j = n - 2; j >= 0; j--)
    {
        suffix[j] = suffix[j + 1] * nums[j + 1];
    }

    // ans
    for (int i = 0; i < nums.size(); i++)
    {
        ans[i] = prefix[i] * suffix[i];
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