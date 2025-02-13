#include <bits/stdc++.h>
#include <string>
using namespace std;

class Solution
{
public:
    int dataTypeSize(string str)
    {
        // your code here
        if (str == "Character")
        {
            return sizeof(char);
        }
        else if (str == "Integer")
        {
            return sizeof(int);
        }
        else if (str == "Long")
        {
            return sizeof(long);
        }
        else if (str == "Float")
        {
            return sizeof(float);
        }
        else if (str == "Double")
        {
            return sizeof(double);
        }
        else
        {
            return -1;
        }
    }
};

int main(void)
{

    string str;
    cout << "Enter a data type(Character, Integer, Long, Float and Double only): ";
    cin >> str;

    Solution Obj;
    cout << Obj.dataTypeSize(str);

    return 0;
}