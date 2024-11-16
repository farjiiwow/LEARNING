#include <iostream>

using namespace std;

void lifeup(int &life) {
    ++(life);
}

template <typename T>

T addme(T a, T b) {
    return a + b;
}

int main(void) {
    int life = 3;
    lifeup(life);
    cout << life << endl;

    int v1 = 3;
    int v2 = 4;
    float v3 = 5.5;
    float v4 = 6.3;
    cout << addme(v3, v4) << endl;
    return 0;
}