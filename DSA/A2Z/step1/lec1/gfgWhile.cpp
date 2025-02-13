#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void display(int &n);
};

void Solution::display(int &n)
{
    int i = 0;
    while (i < 10)
    {
        cout << (10 - i) * n << " ";
        i++;
    }
    cout << endl;
}

int main(void)
{
    int n;
    puts("Enter a number : ");
    cin >> n;
    Solution Obj;
    Obj.display(n);

    return 0;
}