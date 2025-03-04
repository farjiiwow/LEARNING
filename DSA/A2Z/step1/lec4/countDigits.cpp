#include <bits/stdc++.h>
using namespace std;

class Count
{
public:
    int countDigits(int &);
};

int Count::countDigits(int &n)
{
    int count = (int)(log10(n) + 1);
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