// TC -> O(N)
// SC -> O(1)
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool threeConsecutiveOdds(vector<int> &arr)
    {
        int count = 0;
        for (auto it : arr)
        {
            if (it % 2 != 0)
            {
                count++;
                if (count == 3)
                {
                    return true;
                }
            }
            else
            {
                count = 0;
            }
        }
        return false;
    }
};