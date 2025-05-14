// TC -> O(n)
// SC -> O(1)

class Solution
{
public:
    int climbStairs(int n)
    {
        if (n == 1 || n == 2)
        {
            return n;
        }
        int a = 1, b = 2, current;
        for (int i = 3; i <= n; i++)
        {
            current = a + b;
            a = b;
            b = current;
        }
        return current;
    }
};