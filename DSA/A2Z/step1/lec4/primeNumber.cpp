// TC - O(sqrt(N))
// SC - O(1)

#include <bits/stdc++.h>

using namespace std;

class PrimeNumber
{
public:
    static int count;
    int num;
    bool primeNumber(int);
};

int PrimeNumber::count = 0;

bool PrimeNumber::primeNumber(int num)
{
    for (int i = 1; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            count = count + 1;

            if (i != num / i)
            {
                count = count + 1;
            }
        }
    }
    if (count == 2)
    {
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