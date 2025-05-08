// TC -> O(min(N1, N2))
// SC -> O(1)

#include <bits/stdc++.h>
using namespace std;

class GreatestCommonDivisor
{
public:
    int greatestcommonDivisor = 1;
    int divisor(int num1, int num2);
    int min(int num1, int num2);
};

int GreatestCommonDivisor::divisor(int num1, int num2)
{
    int minimum = min(num1, num2);
    for (int i = minimum; i >= 1; i--)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            greatestcommonDivisor = i;
            break;
        }
    }
    return greatestcommonDivisor;
}

int GreatestCommonDivisor::min(int num1, int num2)
{
    if (num1 <= num2)
    {
        return num1;
    }
    else
    {
        return num1;
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
    int divisor = obj.divisor(num1, num2);
    cout << "Greatest Common Divisor : " << divisor << endl;
    return 0;
}