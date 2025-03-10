// TC - O(log|x|)
// SC - O(1)

#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int num)
{
    int count = 0;
    int x;
    int y = num;
    x = to_string(num).length();
    int total = 0;
    int holder;
    while (y != 0)
    {
        holder = y % 10;
        total = total + pow(holder, x);
        y = y / 10;
    }

    return (total == num) ? true : false;
}

int main(void)
{
    int num;
    cout << "Enter a number : " << endl;
    cin >> num;
    cout << isArmstrong(num) << endl;
    return 0;
}