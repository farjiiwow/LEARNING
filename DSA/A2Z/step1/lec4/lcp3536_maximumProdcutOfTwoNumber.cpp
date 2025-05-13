// TC -> O(LogNLog(LogN))
// SC -> O(LogN)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProduct(int n)
    {
        vector<int> arr;
        while (n > 0)
        {
            arr.push_back(n % 10);
            n = n / 10;
        }
        sort(arr.begin(), arr.end(), greater<int>());
        int first = arr[0];
        int second = arr[1];
        return first * second;
    }
};