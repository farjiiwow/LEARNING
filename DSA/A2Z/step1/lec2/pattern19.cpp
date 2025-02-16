#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void Pattern(void);
};

void Solution::Pattern(void)
{
    for (int i = 5; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        for (int k = 0; k < (5 - i) * 2; k++)
        {
            cout << "  ";
        }
        for (int l = 1; l <= i; l++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 4; i >= 0; i--)
    {
        for (int j = 0; j < 5 - i; j++)
        {
            cout << "* ";
        }
        for (int k = 2 * i; k > 0; k--)
        {
            cout << "  ";
        }
        for (int l = 0; l < 5 - i; l++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main(void)
{

    Solution Obj;
    Obj.Pattern();

    return 0;
}