// TC -> O(Min(A,B))
// SC -> O(1)

class Solution
{
public:
    int commonFactors(int a, int b);
};

int Solution::commonFactors(int a, int b)
{
    int count = 0;
    if (a <= b)
    {
        for (int i = 1; i <= a; i++)
        {
            if (a % i == 0 && b % i == 0)
            {
                count++;
            }
        }
    }
    if (b < a)
    {
        for (int i = 1; i <= b; i++)
        {
            if (a % i == 0 && b % i == 0)
            {
                count++;
            }
        }
    }
    return count;
}