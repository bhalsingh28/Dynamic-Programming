// https://www.naukri.com/code360/problems/maximum-sum-of-non-adjacent-elements_843261?leftPanelTab=0

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// --------RECURSION----------

int helper(vector<int> &nums, int sum, int index)
{
}

int maximumNonAdjacentSum(vector<int> &nums)
{
    int sum = 0;
    int ans = helper(nums, sum, 0);
    return ans;
}

// --------MEMOIZATION (TOP-DOWN)----------
// int maximumNonAdjacentSum(vector<int> &nums){

// }

// --------TABULATION(BOTTOMS-UP)----------
// int maximumNonAdjacentSum(vector<int> &nums){

// }

int main()
{
    vector<int> nums = {2, 1, 4, 9}; // 11
    int n = maximumNonAdjacentSum(nums);
    cout << n;
}