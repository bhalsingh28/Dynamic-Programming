#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// RECURSION -> O(2^n)
int recursion(int n)
{
    if (n <= 1)
        return n;
    return recursion(n - 1) + recursion(n - 2);
}

// MEMOIZATION+RECURSION (TOP-BOTTOM) -> O(n)

int memoization(int n, vector<int> &memoi)
{
    if (n <= 1)
        return n;
    if (memoi[n] != -1)
        return memoi[n];
    memoi[n] = memoization(n - 1, memoi) + memoization(n - 2, memoi);
    return memoi[n];
}

// TABULATION (BOTTOM-UP) -> O(n), SC can be optimized by prev1, prev2 tp O(1)

int tabulation(int n, vector<int> &tabul)
{
    if (n <= 1)
        return n;
    tabul[0] = 0, tabul[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        tabul[i] = tabul[i - 1] + tabul[i - 2];
    }
    return tabul[n];
}

int main()
{
    vector<int> memoi(9, -1);
    vector<int> tabul(10, -1);
    cout << recursion(10) << endl;
    cout << memoization(8, memoi) << endl;
    cout << tabulation(9, tabul) << endl;
    return 0;
}
