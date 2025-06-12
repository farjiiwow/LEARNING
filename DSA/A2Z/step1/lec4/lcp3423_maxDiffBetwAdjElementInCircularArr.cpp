// TC -> O(N)
// SC -> O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxAdjacentDistance(vector<int> &nums)
    {
        int size = nums.size() - 1;
        int maxDiff = abs(nums[0] - nums[size]);
        int tempDiff;
        for (int i = 0; i < size; i++)
        {
            tempDiff = abs(nums[i] - nums[i + 1]);
            if (tempDiff > maxDiff)
            {
                maxDiff = tempDiff;
            }
        }
        return maxDiff;
    }
};