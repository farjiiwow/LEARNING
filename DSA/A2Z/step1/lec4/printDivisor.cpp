// TC - O(N)

#include <bits/stdc++.h>
using namespace std;

class PrintDivisor
{
public:
    void printDivisor(int &);
};

void PrintDivisor::printDivisor(int &num)
{
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main(void)
{
    PrintDivisor obj;
    int num;
    cout << "Enter a number : " << endl;
    cin >> num;
    obj.printDivisor(num);
    return 0;
}