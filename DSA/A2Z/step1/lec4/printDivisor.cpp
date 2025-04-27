// TC - O(sqrt(n))

#include <bits/stdc++.h>
#include <vector>
using namespace std;

class PrintDivisor
{
public:
    vector<int> printDivisor(int &);
};

vector<int> PrintDivisor::printDivisor(int &num)
{
    vector<int> divisor;
    for (int i = 1; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            divisor.push_back(i);

            if (i != num / i)
            {
                divisor.push_back(num / i);
            }
        }
    }
    sort(divisor.begin(), divisor.end());
    return divisor;
}

int main(void)
{
    PrintDivisor obj;
    int num;
    cout << "Enter a number : ";
    cin >> num;
    vector<int> divisor;
    divisor = obj.printDivisor(num);
    for (auto it : divisor)
    {
        cout << it << " ";
    }
    return 0;
}