// TC -> O(logN)
// SC -> O(1)

class Solution
{
public:
    int subtractProductAndSum(int n)
    {
        int product, sum;
        product = 1;
        sum = 0;
        while (n != 0)
        {
            product = product * (n % 10);
            sum = sum + (n % 10);
            n = n / 10;
        }
        return product - sum;
    }
};