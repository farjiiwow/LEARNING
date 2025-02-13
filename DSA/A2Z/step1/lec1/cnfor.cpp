#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int a = 1, b = 1;
    int c;
    int Fibonacci(int &num);
};

int Solution::Fibonacci(int &num)
{
    for (int i = 2; i < num; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    if (num == 1 || num == 2)
    {
        return 1;
    }
    else
    {
        return c;
    }
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    Solution Obj;
    cout << Obj.Fibonacci(num) << endl;

    return 0;
}