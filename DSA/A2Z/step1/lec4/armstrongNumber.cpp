#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int num)
{
    // Write your code here
    int count = 0;
    int x = num;
    int y = num;
    while (x != 0)
    {
        count++;
        x = x / 10;
    }
    int total = 0;
    int holder;
    while (y != 0)
    {
        holder = y % 10;
        int sum = 1;

        for (int i = 0; i < count; i++)
        {
            sum = sum * holder;
        }
        total = total + sum;
        y = y / 10;
    }

    if (total == num)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(void)
{
    int num;
    cout << "Enter a number : " << endl;
    cin >> num;
    cout << isArmstrong(num) << endl;
    return 0;
}