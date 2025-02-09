#include <iostream>
#include <queue>

using namespace std;

int main(void)
{

    queue<int> myq;

    myq.push(10);
    myq.push(12);
    myq.push(14);
    myq.push(16);

    cout << myq.front() << endl;
    cout << myq.back() << endl;
    myq.pop();
    cout << myq.back() << endl;
    cout << myq.front() << endl;

    while (!myq.empty())
    {
        cout << " " << myq.front();
        myq.pop();
    }

    cout << endl;
    cout << "Outside: " << endl;
    cout << myq.front() << endl;

    priority_queue<int> mypq;

    mypq.push(10);
    mypq.push(40);
    mypq.push(50);
    mypq.push(5);

    while (!mypq.empty())
    {
        cout << " " << mypq.top();
        mypq.pop();
    }

    cout << endl;

    return 0;
}