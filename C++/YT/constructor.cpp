#include <iostream>
#include <string.h>

using namespace std;

class Phone {
    string _name = "";
    string _os = "";
    int _price = 0;

public: 
    Phone();    // default constructor
    Phone(const string & name, const string & os, const int & price);   // parameter constructor
    Phone(const Phone &);   // copy constructor
    string getName(void){
        
        printf("Value of getName is %p\n", this);
        return _os;
        
        }
    int getPrice();
    ~Phone();   // destructor
};

int Phone::getPrice() {
    printf("Value of getPrice is %p\n", this);
    return _price;
}

Phone::Phone() : _name(), _os("Andy"), _price() {
    puts("Default constructor");
}

Phone::Phone(const string & name, const string & os, const int & price) : _name(name), _os(os), _price(price) {
    puts("This is a parameter Constructor");
}

Phone::Phone(const Phone & values) {
    puts("OVERWRITE copy constructor");
    _name = "new-"+values._name;
    _os = "skinned-"+values._os;    //overwrite copy constructor
    _price = values._price;
}

Phone::~Phone() {
    printf("Destructor called for %s\n", _name.c_str());
}

int main(void) {
    
    Phone samsungA1;
    cout << samsungA1.getName() << endl;

    Phone onePlus8("OP8", "Android-Oxy", 799);
    
    printf("Value of object is %p\n", &onePlus8);

    cout << onePlus8.getPrice() << endl;
        
    Phone onePlus8S = onePlus8;
    cout << onePlus8S.getName() << endl;

    return 0;
}