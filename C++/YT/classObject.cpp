#include <iostream>
#include <string.h>

using namespace std;

class User {
    int _secret = 22;

    public:     
    string name = "default";
    void classMessage(void);
    void setSecret(const int & newSecret){_secret = newSecret;}
    int getSecret(void) const;
};

void User::classMessage(void) {
    cout << "Class is great " << name << endl;
}

int User::getSecret(void) const {
    return _secret;
}

int main(void) {
    
    User sam;
    sam.name = "Sam";
    sam.classMessage();
    sam.setSecret(444);
    cout << sam.getSecret() << endl;
    

    User farjii;
    farjii.classMessage();
    farjii.name = "farjiiwow";
    farjii.classMessage();
    
    const User rock;
    cout << rock.getSecret() << endl;

    return 0;
}