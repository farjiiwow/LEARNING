// TC -> O(NLogN)
// SC -> O(LogN)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int size = nums.size();
        sort(nums.begin(), nums.end());
        int value = 0;
        for (auto it : nums)
        {
            if (it == value)
            {
                value++;
            }
            else
            {
                return value;
            }
        }
        return value;
    }
};