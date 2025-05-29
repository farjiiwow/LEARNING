// TC -> O(1)
// SC -> O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2)
    {
        if (((coordinate1[0] + coordinate1[1]) % 2 == 0) && ((coordinate2[0] + coordinate2[1]) % 2 == 0))
        {
            return true;
        }
        else if (((coordinate1[0] + coordinate1[1]) % 2 != 0) && ((coordinate2[0] + coordinate2[1]) % 2 != 0))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};