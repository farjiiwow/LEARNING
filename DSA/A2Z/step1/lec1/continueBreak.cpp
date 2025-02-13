#include <bits/stdc++.h>

using namespace std;

class Solution
{

public:
    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 6;

    void targetCheck(void);
    void displayOdd(void);
};

void Solution::targetCheck(void)
{
    for (int num : numbers)
    {
        if (num == target)
        {
            cout << "Target Found : " << num << endl;
            break;
        }
        cout << "Checking..." << endl;
    }
}

void Solution::displayOdd(void)
{
    for (int num : numbers)
    {
        if (num % 2 == 0)
        {
            continue;
        }
        cout << num << " ";
    }
    cout << endl;
}

int main(void)
{

    Solution continueBreakObj;
    continueBreakObj.targetCheck();
    continueBreakObj.displayOdd();

    return 0;
}