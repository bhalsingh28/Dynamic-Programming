// https://www.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution
{
public:
    // ------------1---------------
    // ---------RECURSION----------
    // -----------O(2^n)-----------

    int knapsackRec(int W, vector<int> &val, vector<int> &wt)
    {
        // Base Case -> Choice Diagram
        // How to think of Base Case ?
        // Think of smallest valid i/p.
    }

    // ------------2---------------
    // ---MEMOIZATION (TOP-DOWN)---
    // -----------O(2^n)-----------

    int knapsackMem(int W, vector<int> &val, vector<int> &wt)
    {
    }

    // ------------3---------------
    // ---TABULATION (BOTTOM-UP)---
    // -----------O(2^n)-----------

    int knapsackTab(int W, vector<int> &val, vector<int> &wt)
    {
    }
};

int main()
{
    int W = 5;
    vector<int> val = {10, 40, 30, 50};
    vector<int> wt = {5, 4, 2, 3};
    Solution obj;
    int rec = knapsackRec(W, val, wt);
    int mem = knapsackMem(W, val, wt);
    int tab = knapsackTab(W, val, wt);
    cout << rec << "  " << mem << "   " << tab;
    return 0;
}
