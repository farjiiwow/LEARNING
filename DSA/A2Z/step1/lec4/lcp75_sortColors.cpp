// TC -> O(N)
// SC -> O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int zero = 0, one = 0, two = 0;
        for (auto it : nums)
        {
            if (it == 0)
            {
                zero++;
            }
            if (it == 1)
            {
                one++;
            }
            if (it == 2)
            {
                two++;
            }
        }
        nums.clear();
        for (int i = 1; i <= zero; i++)
        {
            nums.push_back(0);
        }
        for (int i = 1; i <= one; i++)
        {
            nums.push_back(1);
        }
        for (int i = 1; i <= two; i++)
        {
            nums.push_back(2);
        }
    }
};