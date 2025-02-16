#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void Pattern(void);
};

void Solution::Pattern(void)
{

    for (int i = 4; i > 0; i--)
    {
        for (int j = 1; j <= 5 - i; j++)
        {
            cout << j << " ";
        }
        for (int k = 2 * (i - 1); k > 0 && (i - 1) > 0; k--)
        {
            cout << "  ";
        }
        for (int j = 5 - i; j > 0; j--)
        {
            cout << j << " ";
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