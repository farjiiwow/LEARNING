// TC -> O(N)
// SC -> O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int smallestIndex(vector<int> &nums)
    {
        int container = nums.size() - 1;
        for (int i = 0; i <= container; i++)
        {
            int num = nums[i];
            int sum = 0;
            while (num > 0)
            {
                sum = sum + (num % 10);
                num = num / 10;
            }
            if (sum == i)
            {
                return i;
            }
        }
        return -1;
    }
};