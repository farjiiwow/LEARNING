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
        for (int j = 0; j < 5 - i; j++)
        {
            cout << "  ";
        }
        for (int k = 2 * i; k > 1; k--)
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
