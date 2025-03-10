// TC - O(log|x|)
// SC - O(1)

#include <bits/stdc++.h>
using namespace std;

class Palindrome
{
public:
    bool isPalindrome(int x)
    {
        long long int y = x;
        long long int num = 0;
        while (x != 0)
        {
            num = (num * 10) + (x % 10);
            x = x / 10;
        }
        if (y < 0)
        {
            return false;
        }
        else if (num == y)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main(void)
{
    Palindrome obj;
    int x;
    cout << "Enter a number : " << endl;
    cin >> x;
    cout << obj.isPalindrome(x) << endl;
    return 0;
}