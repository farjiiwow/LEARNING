// TC -> O(logφ(min(a, b)))
// SC -> O(1)

#include <bits/stdc++.h>
using namespace std;

class GreatestCommonDivisor
{
public:
    int findGCD(int, int);
};

int GreatestCommonDivisor::findGCD(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }

    if (a == 0)
    {
        return b;
    }
    else
    {
        return a;
    }
}

int main(void)
{

    GreatestCommonDivisor obj;
    cout << "Enter first number : ";
    int num1, num2;
    cin >> num1;
    cout << "Enter Second number : ";
    cin >> num2;
    int divisor = obj.findGCD(num1, num2);
    cout << "Greatest Common Divisor : " << divisor << endl;
    return 0;
}