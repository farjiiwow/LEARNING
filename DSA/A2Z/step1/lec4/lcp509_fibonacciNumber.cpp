// TC -> O(N)
// SC -> O(1)

class Solution
{
public:
    int fib(int n)
    {
        int a = 0, b = 1, current;
        if (n == 0 || n == 1)
        {
            return n;
        }
        for (int i = 2; i <= n; i++)
        {
            current = a + b;
            a = b;
            b = current;
        }
        return current;
    }
};