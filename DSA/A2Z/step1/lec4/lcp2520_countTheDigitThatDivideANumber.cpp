// TC -> O(logN)
// SC -> O(1)

class Solution
{
public:
    int countDigits(int num);
};

int Solution::countDigits(int num)
{
    int a = num;
    int count = 0;
    while (a != 0)
    {
        int b;
        b = a % 10;
        a = a / 10;
        if (num % b == 0)
        {
            count++;
        }
    }
    return count;
}