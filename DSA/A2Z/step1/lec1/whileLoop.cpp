#include <bits/stdc++.h>
using namespace std;

int main(void)
{

    int fact = 1;
    int num = 5;

    while (num != 0)
    {
        fact = fact * num;
        num--;
    }

    cout << "factorial of 5 is : " << fact << endl;

    return 0;
}