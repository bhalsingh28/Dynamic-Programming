// LINK : https://www.geeksforgeeks.org/problems/nth-catalan-number0817/1

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution
{
public:
  // ----------RECURSION-----------

  // int findCatalan(int n)
  // {
  //   if (n <= 1)
  // return 1; // If Return n, for findcatalan(n-i-1) it will give 0 for n = 5, i= 4. and whole things become 0.
  //   int cat = 0;
  //   for (int i = 1; i < n; i++)
  //   {
  //     cat += findCatalan(i) * findCatalan(n - i - 1);
  //   }
  //   return cat;
  // }

  // ----------Dynamic Programming-----------

  int findCatalan(int n)
  {
    if (n <= 1)
      return 1;
    vector<int> dp(n + 1, 0);
    dp[0] = dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
      for (int j = 0; j < i; j++)
      {
        dp[i] += dp[j] * dp[i - j - 1];
      }
    }
    return dp[n];
  }

  // ----------SPACE OPTIMAZATION-----------
};

int main()
{
  int n = 6;
  Solution obj;
  cout << obj.findCatalan(n);
  return 0;
}