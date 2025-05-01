// https://leetcode.com/problems/coin-change/description/?envType=study-plan-v2&envId=dynamic-programming

#include <bits/stdc++.h>
using namespace std;

// // ---------- RECURSION ----------

// class Solution
// {
// public:
//     int helper(vector<int> &coins, int amount)
//     {
//         if (amount == 0)
//             return 0;
//         if (amount < 0)
//             return INT_MAX;
//         int mini = INT_MAX;
//         for (int i = 0; i < coins.size(); ++i)
//         {
//             int ans = helper(coins, amount - coins[i]);
//             if (ans != INT_MAX)
//                 mini = min(mini, 1 + ans);
//         }
//         return mini;
//     }

//     int coinChange(vector<int> &coins, int amount)
//     {
//         int ans = helper(coins, amount);
//         if (ans == INT_MAX)
//             return -1;
//         return ans;
//     }
// };

// int main()
// {
//     vector<int> coin = {1, 2, 5};
//     int amount = 11;
//     Solution obj;
//     int ans = obj.coinChange(coin, amount);
//     cout << ans;
// }

// ---------- RECURSION + Memoization (TOP-DOWN)----------

// class Solution
// {
// public:
//     int helper(vector<int> &coins, vector<int> &dp, int amount)
//     {
//         if (amount == 0)
//             return 0;
//         if (amount < 0)
//             return INT_MAX;
//         if (dp[amount] != -1)
//             return dp[amount];
//         int mini = INT_MAX;
//         for (int i = 0; i < coins.size(); ++i)
//         {
//             int ans = helper(coins, dp, amount - coins[i]);
//             if (ans != INT_MAX)
//                 mini = min(mini, 1 + ans);
//         }
//         return dp[amount] = mini;
//     }

//     int coinChange(vector<int> &coins, int amount)
//     {
//         vector<int> dp(amount + 1, -1);
//         int ans = helper(coins, dp, amount);
//         // dp[amount] = ans;
//         if (ans == INT_MAX)
//             return -1;
//         return ans;
//     }
// };

// ---------- TABULATION (BOTTOM - UP)----------

class Solution
{
public:
    int coinChange(vector<int> &coins, int amount)
    {
        if (amount == 0)
            return 0;
        vector<int> dp(amount + 1, INT_MAX);
        dp[0] = 0;
        for (int i = 1; i <= amount; ++i)
        {
            for (int coin : coins)
            {
                if (i - coin >= 0 && dp[i - coin] != INT_MAX)
                {
                    dp[i] = min(dp[i], 1 + dp[i - coin]);
                }
            }
        }

        return dp[amount] == INT_MAX ? -1 : dp[amount];
    }
};

int main()
{
    vector<int> coin = {2};
    int amount = 3;
    Solution obj;
    int ans = obj.coinChange(coin, amount);
    cout << ans;
}