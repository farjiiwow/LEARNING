#include <iostream>
using namespace std;

int main(void) {
    
    int *myp ;
    myp = new int[10000];
    cout << "Memory space allocated\n";

    delete [] myp;
    
    return 0;
}