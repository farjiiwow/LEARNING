#include <iostream>

using namespace std;

int main(void) {
    
    bool isSignedIn = true;
    bool isAdmin = true;

    if(isSignedIn && isAdmin) {
        puts("Welcome Admin!");
    } else {
        puts("No Admin Acess!");
    }

    return 0;
}