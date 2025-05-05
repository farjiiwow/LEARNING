// TC - O(logN)
// SC - O(1)

class Solution
{
public:
    bool isUgly(int n);
    int check(int &n, int i);
};

int Solution::check(int &n, int i)
{
    while (n % i == 0)
    {
        n = n / i;
    }
    return n;
}

bool Solution::isUgly(int n)
{

    if (n <= 0)
    {
        return false;
    }
    if (n == 1)
    {
        return true;
    }

    check(n, 2);
    check(n, 3);
    check(n, 5);

    if (n == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}