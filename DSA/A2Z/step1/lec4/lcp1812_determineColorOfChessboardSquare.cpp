// TC -> O(1)
// SC -> O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool squareIsWhite(string coordinates)
    {
        if ((coordinates[0] + coordinates[1]) % 2 == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};