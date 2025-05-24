// TC -> O(1)
// SC -> O(1)

class Solution
{
public:
    int countOdds(int low, int high)
    {
        int n;
        n = high - low + 1;
        if (n % 2 == 0)
        {
            return n / 2;
        }
        else
        {
            if (low % 2 != 0 || high % 2 != 0)
            {
                return n / 2 + 1;
            }
            else
            {
                return n / 2;
            }
        }
    }
};