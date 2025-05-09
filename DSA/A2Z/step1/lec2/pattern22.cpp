#include <bits/stdc++.h>
using namespace std;

class Pattern22
{
public:
    void getNumberPattern(int n);
};

void Pattern22::getNumberPattern(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int top, bottom, left, right;
            top = i;
            bottom = 2 * n - 2 - i;
            left = j;
            right = 2 * n - 2 - j;
            cout << n - (min(min(top, bottom), min(left, right)));
        }
        cout << endl;
    }
}

int main(void)
{
    Pattern22 obj;
    int n;
    cout << "Enter number: ";
    cin >> n;
    obj.getNumberPattern(n);
    return 0;
}