//  TC -> O(N*D)
// SC -> O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findNumbers(vector<int> &nums)
    {
        int count = 0;
        for (auto it : nums)
        {
            int temp = 0;
            while (it != 0)
            {
                temp++;
                it = it / 10;
            }
            if (temp % 2 == 0)
            {
                count++;
            }
        }
        return count;
    }
};