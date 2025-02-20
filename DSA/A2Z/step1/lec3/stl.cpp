#include <bits/stdc++.h>

using namespace std;

void print(void)
{
    cout << "farjii" << endl;
}

int sum(int a, int b)
{
    return a + b;
}

void explainPair(void);

void explainVector(void);

int main(void)
{

    print();
    cout << sum(2, 3) << endl;
    explainPair();
    explainVector();

    return 0;
}

void explainPair(void)
{
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> p1 = {1, {2, 4}};
    cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl;

    pair<pair<int, int>, int> p2 = {{11, 22}, 44};
    cout << p2.first.first << " " << p2.first.second << " " << p2.second << endl;

    pair<int, int> arr[] = {{1, 3}, {5, 9}, {11, 22}};
    cout << arr[0].first << " " << arr[0].second << endl;
    cout << arr[2].first << " " << arr[2].second << endl;
    cout << arr[1].first << " " << arr[1].second << endl;
}

void explainVector(void)
{
}