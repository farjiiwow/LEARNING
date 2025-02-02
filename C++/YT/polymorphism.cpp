#include <iostream>
#include <string>
using namespace std;

class One {
public: 
    void intro(void) {
        cout << "I am one\n";
    }
};  


class Two : public One {
public: 
    void intro(void) {
        cout << "I am two\n";
    }
};

class Three : public One {
public: 
    void intro(void) {
        cout << "I am three\n";
    }
};



int main(void) {
    
    One a;
    Two b;
    Three c;

    a.intro();
    b.intro();
    c.intro();
    
    return 0;
}