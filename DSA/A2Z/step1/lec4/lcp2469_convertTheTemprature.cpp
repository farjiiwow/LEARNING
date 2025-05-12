// TC -> O(1)
// SC -> O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<double> convertTemperature(double celsius)
    {
        vector<double> temprature;
        temprature.push_back(celsius + 273.15);
        temprature.push_back(celsius * 1.80 + 32.00);
        return temprature;
    }
};