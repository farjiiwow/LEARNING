// TC -> O(N+Min(Nums))
// SC -> O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findGCD(vector<int> &nums);
    int greatestcommonDivisor = INT_MIN;
};

int Solution::findGCD(vector<int> &nums)
{
    int min = INT_MAX;
    int max = INT_MIN;
    for (auto it : nums)
    {
        if (it < min)
        {
            min = it;
        }
        if (it > max)
        {
            max = it;
        }
    }
    for (int i = 1; i <= min; i++)
    {
        if (min % i == 0 && max % i == 0)
        {
            greatestcommonDivisor = i;
        }
    }
    return greatestcommonDivisor;
}