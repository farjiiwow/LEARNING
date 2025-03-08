// time complexity O(log|x|)
// space complexity O(1)

#include <bits/stdc++.h>
#include <math.h>
using namespace std;
class ReverseNumber
{
public:
    int reverse(long long int &);
};

int ReverseNumber::reverse(long long int &x)
{
    long long int num = 0;
    while (x != 0)
    {
        num = (num * 10) + x % 10;
        x = x / 10;
    }

    if (num < (pow(2, 31) - 1) && num > -pow(2, 31))
    {
        return num;
    }
    else
    {
        return 0;
    }
}

int main(void)
{
    ReverseNumber num;
    cout << "Enter a number to reverse it: " << endl;
    long long int number;
    cin >> number;
    cout << num.reverse(number) << endl;
    return 0;
}