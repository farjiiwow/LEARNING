#include <bits/stdc++.h>
using namespace std;

class Pattern21
{
public:
    void getStarPattern(int n);
};

void Pattern21::getStarPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i == 1 || i == (n))
        {
            for (int j = 1; j <= n; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        else
        {
            for (int j = 1; j <= n; j++)
            {
                if (j == 1 || j == n)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
}

int main(void)
{
    Pattern21 obj;
    cout << "Enter number of lines: ";
    int n;
    cin >> n;
    obj.getStarPattern(n);
    return 0;
}
