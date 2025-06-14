// TC -> O(N^2)
// SC -> O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        int size = nums.size() - 1;
        int count = 0;
        for (int i = 0; i <= size; i++)
        {
            for (int j = i + 1; j <= size; j++)
            {
                if (nums[i] == nums[j])
                {
                    if (i < j)
                    {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};