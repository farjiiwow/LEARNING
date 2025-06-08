// TC -> O(1)
// SC -> O(1)

class Solution
{
public:
    int smallestNumber(int n, int t)
    {
        int product = 1;
        int num = n;
        while (num > 0)
        {
            product = product * (num % 10);
            num = num / 10;
        }
        if (product % t == 0)
        {
            return n;
        }
        else
        {
            product = 1;
        }
        int store;
        for (int i = n + 1; i <= 100; i++)
        {
            int temp = i;
            while (temp > 0)
            {
                product = product * (temp % 10);
                temp = temp / 10;
            }
            if (product % t == 0)
            {
                store = i;
                break;
            }
            else
            {
                product = 1;
            }
        }
        return store;
    }
};