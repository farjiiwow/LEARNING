#include <bits/stdc++.h>
using namespace std;

class GreatestCommonDivisor
{
public:
    int greatestcommonDivisor = INT_MIN;
    int divisor(int num1, int num2);
    int min(int num1, int num2);
};

int GreatestCommonDivisor::divisor(int num1, int num2)
{
    int minimum = min(num1, num2);
    for (int i = 1; i <= minimum; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            greatestcommonDivisor = i;
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