#include <iostream>
#include <string.h>

using namespace std;

class User {
    int secret = 22;

    public:     
    string name = "default";
    void classMessage(void){cout << "Class is great " << name << endl;}
};


int main(void) {
    
    User sam;
    sam.name = "Sam";
    sam.classMessage();

    User farjii;
    farjii.classMessage();
    farjii.name = "farjiiwow";
    farjii.classMessage();
    
    return 0;
}