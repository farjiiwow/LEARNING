// TC -> O(Area)
// SC -> O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> constructRectangle(int area)
    {
        int L, W;
        for (int i = sqrt(area); i <= area; i++)
        {
            if (area % i == 0)
            {
                L = area / i;
                W = i;
                if (L < W)
                {
                    L = L + W;
                    W = L - W;
                    L = L - W;
                }
                break;
            }
        }
        vector<int> ans;
        ans.push_back(L);
        ans.push_back(W);
        return ans;
    }
};