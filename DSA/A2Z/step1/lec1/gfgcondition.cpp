#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string compareNM(int &n, int &m)
    {
        // code here
        if (n < m)
        {
            return "lesser";
        }
        else if (n == m)
        {
            return "equal";
        }
        else
        {
            return "greater";
        }
    }
};

int main(void)
{
    int firstNum, secondNum;
    cout << "Enter first number: ";
    cin >> firstNum;
    cout << "Enter second number: ";
    cin >> secondNum;
    Solution Obj;
    cout << Obj.compareNM(firstNum, secondNum) << endl;
}