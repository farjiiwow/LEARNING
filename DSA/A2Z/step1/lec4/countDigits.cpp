#include <bits/stdc++.h>
using namespace std;

class Count
{
public:
    int countDigits(int &);
};

int Count::countDigits(int &n)
{
    int count = 0;
    while (n != 0)
    {
        count = count + 1;
        n = n / 10;
    }
    return count;
}

int main(void)
{

    Count Obj;
    cout << "Enter a number: " << endl;
    int n;
    cin >> n;

    cout << Obj.countDigits(n) << endl;

    return 0;
}