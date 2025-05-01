// https://www.geeksforgeeks.org/problems/find-optimum-operation4504/1

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution
{
public:
    int minOperation(int n)
    {
        vector<int> dp(n + 1);
        dp[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            dp[i] = dp[i - 1] + 1;
            if (i % 2 == 0)
            {
                dp[i] = dp[i / 2] + 1; // The +1 count the total operations not the logic. it means we can first get to i/2 then double it
                                       // so that it takes one more operation. So total op. = That of i/2 + 1(for doubling)
            }
        }
        return dp[n];
    }
};

int main()
{
    Solution obj;
    int n = 3;
    int ans = obj.minOperation(n);
    cout << ans;
}