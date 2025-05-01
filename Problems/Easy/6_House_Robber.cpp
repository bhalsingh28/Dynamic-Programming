#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution
{
public:
    int rob(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 1)
            return nums[0];
        int dp[n];
        dp[0] = nums[0], dp[1] = nums[1];
        for (int i = 2; i < n; i++)
        {
            dp[i] = max(dp[i - 1], nums[i] + dp[i - 2]);
        }
        return dp[n - 1];
    }
};

int main()
{
    vector<int> nums = {2, 7, 9, 3, 1};
    Solution obj;
    int ans = obj.rob(nums);
    cout << ans;
    return 0;
}