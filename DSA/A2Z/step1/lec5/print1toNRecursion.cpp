// TC ->
// SC ->

#include <bits/stdc++.h>
using namespace std;

class Recursion
{
public:
    void print(int, int);
};

void Recursion::print(int i, int num)
{
    if (i > num)
    {
        return;
    }
    cout << i << " ";
    this->print(i + 1, num);
}

int main(void)
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    Recursion obj;
    obj.print(1, num);
    return 0;
}