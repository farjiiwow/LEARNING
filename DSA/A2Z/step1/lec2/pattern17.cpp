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
        for (int j = i - 1; j > 0; j--)
        {
            cout << "  ";
        }
        for (int k = 0; k < 5 - i; k++)
        {
            printf("%c ", 65 + k);
        }
        for (int l = 4 - i; l > 0; l--)
        {
            printf("%c ", 65 + (l - 1));
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