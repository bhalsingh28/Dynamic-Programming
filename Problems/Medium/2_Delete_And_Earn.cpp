// https://leetcode.com/problems/delete-and-earn/?envType=study-plan-v2&envId=dynamic-programming

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution
{
public:
    int deleteAndEarn(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        int n = INT_MIN;
        for (int i = 0; i < nums.size(); ++i)
        {
            mp[nums[i]] += nums[i];
            n = max(n, nums[i]);
        }
        vector<int> dp(n + 1, 0);
        dp[0] = 0;
        dp[1] = mp.count(1) ? mp[1] : 0;
        for (int i = 2; i <= n; i++)
        {
            dp[i] = max(dp[i - 1], mp[i] + dp[i - 2]);
        }
        return dp[n];
    }
};

int main()
{
    vector<int> nums = {2, 2, 3, 3, 3, 4};
    Solution obj;
    int ans = obj.deleteAndEarn(nums);
    cout << ans; // 9
}