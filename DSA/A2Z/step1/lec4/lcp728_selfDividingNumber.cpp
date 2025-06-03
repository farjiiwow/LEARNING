// TC -> O((Right−Left)∗Log(Right))
// SC -> O(Right−Left)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> selfDividingNumbers(int left, int right)
    {
        vector<int> selfDividing;
        for (int i = left; i <= right; i++)
        {
            int num = i;
            bool value = false;
            while (num > 0)
            {
                if (num % 10 == 0)
                {
                    value = false;
                    break;
                }
                else if (i % (num % 10) == 0)
                {
                    value = true;
                }
                else
                {
                    value = false;
                    break;
                }
                num = num / 10;
            }
            if (value == true)
            {
                selfDividing.push_back(i);
            }
        }
        return selfDividing;
    }
};