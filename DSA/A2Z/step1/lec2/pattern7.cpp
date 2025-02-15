#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void Pattern(void);
};

void Solution::Pattern(void)
{
    for (int i = 1; i < 6; i++)
    {
        for (int j = 5 - i; j >= 0; j--)
        {
            cout << "  ";
        }
        for (int k = 1; k < 2 * i; k++)
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