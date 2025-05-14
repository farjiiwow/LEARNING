// TC -> O(N)
// SC -> O(N)

#include <bits/stdc++.h>
using namespace std;

class ClimbingStairs
{
public:
    int climbingStairs(int n);
};

int ClimbingStairs::climbingStairs(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    vector<int> dp(n + 1);
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}