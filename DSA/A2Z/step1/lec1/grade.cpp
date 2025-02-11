#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int marks;
    cout << "Enter your marks : " << endl;
    cin >> marks;

    if (marks < 25)
    {
        cout << "Grade F" << endl;
    }
    else if (marks <= 44)
    {
        cout << "Grade E" << endl;
    }
    else if (marks <= 49)
    {
        cout << "Grade D" << endl;
    }
    else if (marks <= 59)
    {
        cout << "Grade C" << endl;
    }
    else if (marks <= 69)
    {
        cout << "Grade B" << endl;
    }
    else if (marks >= 70)
    {
        cout << "Grade A" << endl;
    }
    else
    {
        cout << "Invalid marks entered" << endl;
    }

    return 0;
}