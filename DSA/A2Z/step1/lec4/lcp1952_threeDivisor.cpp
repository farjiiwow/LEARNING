// TC -> O(N)
// SC -> O(1)

class Solution
{
public:
    bool isThree(int n);
};

bool Solution::isThree(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 3)
    {
        return true;
    }
    else
    {
        return false;
    }
}