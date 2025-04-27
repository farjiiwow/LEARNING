// TC - O(N)
// SC - O(1)

#include <bits/stdc++.h>

using namespace std;

class PrimeNumber
{
public:
    int num;
    bool primeNumber(int);
};

bool PrimeNumber::primeNumber(int num)
{
    if (num >= 2)
    {
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                return false;
            }
        }
        return true;
    }
    else
    {
        return false;
    }
}

int main(void)
{
    PrimeNumber number;
    cout << "Enter a number : ";
    cin >> number.num;
    cout << number.primeNumber(number.num) << endl;
    return 0;
}