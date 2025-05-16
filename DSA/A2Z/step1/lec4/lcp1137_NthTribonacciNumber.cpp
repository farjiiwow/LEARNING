// TC -> O(N)
// SC -> O(1)

class Tribonacci
{
public:
    int tribonacci(int n);
};

int Tribonacci::tribonacci(int n)
{
    if (n == 0)
    {
        return n;
    }
    if (n == 1 || n == 2)
    {
        return 1;
    }
    int t0 = 0, t1 = 1, t2 = 1, current;
    for (int i = 3; i <= n; i++)
    {
        current = t0 + t1 + t2;
        t0 = t1;
        t1 = t2;
        t2 = current;
    }
    return current;
}