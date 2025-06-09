// TC -> O(N)
// SC -> O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canAliceWin(vector<int> &nums)
    {
        int sum1 = 0;
        int sum2 = 0;
        for (auto it : nums)
        {
            int value = it;
            int count = 0;
            while (value > 0)
            {
                count++;
                value = value / 10;
            }
            if (count == 1)
            {
                sum1 = sum1 + it;
            }
            else
            {
                sum2 = sum2 + it;
            }
        }
        if (sum1 == sum2)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};