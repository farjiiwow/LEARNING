#include <iostream>
#include <string>
#include <memory>
using namespace std;

class User {
public: 
    User() {
        cout << "User Cretaed\n";
    }
    ~User() {
        cout << "User Destroyed\n";
    }
    void testFunc(void) {
        cout << "I am a test function\n";
    }
};


int main(void) {
    
    {
        // unique_ptr<User> sam(new User());
        unique_ptr<User> sam = make_unique<User>();
        sam->testFunc();

        // not allowed
        // unique_ptr<User> samm = sam;
    }
    cout << "outside code\n";
    
    return 0;
}