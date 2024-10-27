#include <iostream>

using namespace std;
// #define PI 3.14

//bit reference
enum MsOffice: uint8_t {
    BOLD = 0,
    ITALICS = 2,
    UNDERLINE = 4,
    COSSED
};


int main(void) {
    
    int myAttributes = UNDERLINE;
    cout << myAttributes << endl;

    return 0;
}