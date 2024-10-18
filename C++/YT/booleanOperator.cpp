#include <iostream>

using namespace std;

int main(void) {
    
    bool isfbUser = false;
    bool isGoogleUser = true;
    bool isAdmin = true;

    if((isGoogleUser || isfbUser) && isAdmin) {
        puts("Welcome Admin!");
    } else {
        puts("No Admin Acess!");
    }

    return 0;
}