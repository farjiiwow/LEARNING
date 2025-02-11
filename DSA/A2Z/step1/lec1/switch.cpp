#include <bits/stdc++.h>

using namespace std;

int main(void)
{

    int num;
    cout << "Enter a number between 1 to 7" << endl;
    cin >> num;

    switch (num)
    {
    case 1:
        cout << "It's Monday my friend" << endl;
        break;
    case 2:
        cout << "It's Tuesday my friend" << endl;
        break;
    case 3:
        cout << "It's Wednesday my friend" << endl;
        break;
    case 4:
        cout << "It's Thursday my friend" << endl;
        break;
    case 5:
        cout << "It's Friday my friend" << endl;
        break;
    case 6:
        cout << "It's Saturday my friend" << endl;
        break;
    case 7:
        cout << "It's Sunday my friend" << endl;
        break;
    default:
        cout << "Not a valid day" << endl;
        break;
    }

    return 0;
}