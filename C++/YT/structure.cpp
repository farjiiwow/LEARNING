#include <iostream>
using namespace std;

struct User {
    const int uId;
    const char *name;
    const char *email;
    int course_count;
};

int main(void) {
    
    User mickey = {001, "mickey", "mickey@cartoon.com", 2};
    User donald = {002, "donald", "donald@cartoon.com", 3};

    cout << mickey.course_count << endl;


    // name is not const pointer is const 
    // to make name const we should write 
    // const char * const name
    mickey.name = "mickmouse";
    cout << mickey.name << endl;

    User *d = &donald;

    d->course_count = 12;
    cout << donald.course_count << endl;
    
    return 0;
}