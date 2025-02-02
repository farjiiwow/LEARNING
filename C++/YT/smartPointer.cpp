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
    
    // unique pointer
    {
        // unique_ptr<User> sam(new User());
        unique_ptr<User> sam = make_unique<User>();
        sam->testFunc();

        // not allowed
        // unique_ptr<User> samm = sam;
    }
    // cout << "outside code\n";

    // shared pointer
    {
        // shared_ptr<User> tim(new User());
        shared_ptr<User> tim = make_shared<User>();
        weak_ptr<User> wtim = tim;
        // weak_ptr<User> wtimm = make_weak<User>(); //not allowed
        shared_ptr<User> timm = tim; // no error

    }
    
    return 0;
}