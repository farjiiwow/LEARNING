// TC -> O(N)
// SC -> O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int arraySign(vector<int> &nums)
    {
        int product = 1;
        for (auto it : nums)
        {
            if (it == 0)
            {
                product = 0;
                return 0;
            }
            else if (it < 0)
            {
                product = product * (-1);
            }
            else
            {
                product = product * 1;
            }
        }
        if (product < 0)
        {
            return -1;
        }
        else
        {
            return 1;
        }
    }
};