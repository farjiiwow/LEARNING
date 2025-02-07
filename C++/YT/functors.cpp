#include <iostream>
using namespace std;

class myFloat {
    float ft;
public:
    myFloat() {
        ft = 0.1;
    }
    void getValue(void) {
        cout << ft << endl;
    }
    void operator()(float v) {
        ft += v;
    }
};

int main(void) {

    myFloat floaty;
    floaty.getValue();

    floaty(0.1);
    floaty.getValue();

    floaty(1.3);
    floaty.getValue();

    return 0;
}