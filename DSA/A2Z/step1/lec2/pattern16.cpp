#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void Pattern(void);
};

void Solution::Pattern(void)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c ", 65 + i);
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