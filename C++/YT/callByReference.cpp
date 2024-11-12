#include <iostream>
using namespace std;

void lifeup(int &life) {
    ++(life);
}

int main(void) {
    int life = 3;
    lifeup(life);
    cout << life << endl;
    return 0;
}