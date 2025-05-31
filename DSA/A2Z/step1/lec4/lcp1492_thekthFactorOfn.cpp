// TC -> O(N)
// SC -> O(D(N))

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int kthFactor(int n, int k)
    {
        vector<int> factor;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                factor.push_back(i);
            }
        }
        sort(factor.begin(), factor.end());
        if (k > factor.size())
        {
            return -1;
        }
        else
        {
            return factor[k - 1];
        }
    }
};