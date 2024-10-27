#include <iostream>

using namespace std;
// #define PI 3.14

enum MsOffice {
    BOLD = 5,
    ITALICS,
    UNDERLINE,
    COSSED
};


int main(void) {
    
    int myAttributes = UNDERLINE;
    cout << myAttributes << endl;

    return 0;
}