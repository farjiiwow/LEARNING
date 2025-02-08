#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
    
    vector<int> myint = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for(int x: myint) {
        cout << x << " ";
    }
    cout << endl;
    
    partition(begin(myint), myint.end(), [](auto x){ return x%2 == 0;});
    for(int x: myint) {
        cout << x << " ";
    }


    cout << endl;

    return 0;
}