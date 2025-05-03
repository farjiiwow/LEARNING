// TC -> O(N) + O(Nlog(logN)) + O(N)
// SC -> O(N)

#include <bits/stdc++.h>
using namespace std;

class Prime
{
public:
    void primeNumber(int);
};

void Prime::primeNumber(int n)
{
    int prime[n + 1];
    for (int i = 2; i <= n; i++)
    {
        prime[i] = 1;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i] == 1)
        {
            for (int j = i * i; j <= n; j = j + i)
            {
                prime[j] = 0;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 1)
        {
            cout << i << " ";
        }
    }
}

int main(void)
{
    Prime number;
    int n;
    cout << "Enter a number : ";
    cin >> n;
    cout << "Prime number less than " << n << " is : " << endl;
    number.primeNumber(n);

    return 0;
}