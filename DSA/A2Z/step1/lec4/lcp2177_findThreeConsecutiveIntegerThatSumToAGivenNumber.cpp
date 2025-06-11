// TC -> O(1)
// SC -> O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<long long> sumOfThree(long long num)
    {
        long long x;
        vector<long long> store;
        x = num / 3;
        if ((3 * x == num))
        {
            store.push_back(x - 1);
            store.push_back(x);
            store.push_back(x + 1);
        }
        return store;
    }
};