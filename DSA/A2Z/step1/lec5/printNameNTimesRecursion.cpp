// TC -> O(N)
// SC -> O(N)

#include <bits/stdc++.h>
using namespace std;

class Recursion
{
public:
    void name(int, int);
};

void Recursion::name(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << "farjii ";
    this->name(i + 1, n);
}

int main(void)
{
    int n;
    cout << "Enter number of times to print a name: ";
    cin >> n;
    Recursion obj;
    obj.name(1, n);
    return 0;
}