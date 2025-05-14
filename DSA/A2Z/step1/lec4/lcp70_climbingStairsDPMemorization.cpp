// TC -> O(N)
// SC -> O(N)

#include <bits/stdc++.h>
using namespace std;

class ClimbingStairs
{
public:
    int helper(int n, vector<int> &dp);
    int climbingStairs(int n);
};

int ClimbingStairs::helper(int n, vector<int> &dp)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }

    if (dp[n] != -1)
    {
        return dp[n];
    }

    dp[n] = helper(n - 1, dp) + helper(n - 2, dp);
    return dp[n];
}

int ClimbingStairs::climbingStairs(int n)
{
    vector<int> dp(n + 1, -1);
    return helper(n, dp);
}