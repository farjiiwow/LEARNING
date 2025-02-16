#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int num = 1;
    void Pattern(void);
};

void Solution::Pattern(void)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << num << " ";
            num = num + 1;
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