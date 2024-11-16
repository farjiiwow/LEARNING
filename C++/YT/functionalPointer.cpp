#include <iostream>
using namespace std;

int getTwo(void) {
    return 2;
}

void interesting(void) {
    puts("I am interesting");
}

int main(void) {
    int whatIgot = getTwo();

    void (*pointsToInteresting)() = interesting;

    cout << whatIgot << endl;
    pointsToInteresting();
    (*pointsToInteresting)();
    return 0;
}