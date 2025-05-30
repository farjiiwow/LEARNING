// TC -> O(1)
// SC -> O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double angleClock(int hour, int minutes)
    {
        double hourAngle = 30 * hour + 0.5 * minutes;
        double minuteAngle = 6 * minutes;
        double diff = abs(hourAngle - minuteAngle);
        return min(diff, 360 - diff);
    }
};