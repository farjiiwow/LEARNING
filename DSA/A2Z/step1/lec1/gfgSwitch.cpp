#include <bits/stdc++.h>
#include <cmath>

using namespace std;

class Solution
{
public:
    double switchCase(int choice, vector<double> &arr)
    {
        // code here
        switch (choice)
        {
        case 1:
            return arr[0] * arr[0] * M_PI;
        case 2:
            return arr[0] * arr[1];
        default:
            return -1;
        }
    }
};

int main(void)
{
    Solution Obj;
    vector<double> arr;
    int choice;
    cout << "Enter your choice (only 1 and 2 allow): ";
    cin >> choice;
    if (choice == 1)
    {
        int radius;
        cout << "Enter Radius: ";
        cin >> radius;
        arr.push_back(radius);
        cout << Obj.switchCase(choice, arr);
    }
    else if (choice == 2)
    {
        int length, width;
        cout << "Enter Length: ";
        cin >> length;
        arr.push_back(length);
        cout << "Enter width: ";
        cin >> width;
        arr.push_back(width);
        cout << Obj.switchCase(choice, arr);
    }
    else
    {
        cout << "Invalid input" << endl;
    }
    cout << endl;
    return 0;
}