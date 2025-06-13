// TC -> O(n * √m)
// where m is the maximum number in the array
// SC -> O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int sumFourDivisors(vector<int> &nums)
    {
        int totalSum = 0;
        for (auto it : nums)
        {
            int count = 0;
            int sum = 0;
            for (int i = 1; i * i <= it; i++)
            {
                if (it % i == 0)
                {
                    int j = it / i;
                    if (j == i)
                    {
                        count++;
                        sum = sum + i;
                    }
                    else
                    {
                        count = count + 2;
                        sum = sum + i + j;
                    }
                    if (count > 4)
                    {
                        break;
                    }
                }
            }
            if (count == 4)
            {
                totalSum = totalSum + sum;
            }
        }
        return totalSum;
    }
};