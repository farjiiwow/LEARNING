#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> passedBy(int a, int &b)
    {
        // code here
        vector<int> v = {a + 1, b + 2};
        return v;
    }
};

int main(void)
{
    Solution Obj;
    int a = 10;
    int b = 20;
    vector<int> result = Obj.passedBy(a, b);
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}