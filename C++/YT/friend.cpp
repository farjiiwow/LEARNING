#include <iostream>
#include <string>
using namespace std;

class Man {
    string _name;
    int _age;
    Man() {}

    friend class Superman;

protected:
    Man(const string & name, const int & age) : _name(name), _age(age){}
    void run(void){puts("I can run");}
    int getAge(void) {return _age;}

public: 
    void sayName(void) const;
};

void Man::sayName(void) const {
    cout << "My name is : " << _name << " and age is : " << _age << endl;
}

// superman

class Superman : public Man {
    bool flight;
public:
    Superman(string name) : Man(name, 26){}
    // void run(void) {printf("age is : %d\n", _age);} // private member are not accessible
    // void run(void) {printf("Age is : %d\n", getAge());} // we can use getter and setter to access it but there are another method too which is known as friend function
    void run(void) {printf("age is : %d\n", _age);}
};

class Spiderman : public Man {
    bool webbing;
public: 
    Spiderman(string name) : Man(name, 19) {}
    void run(void) {puts("I can run at normal speed");}
    
    // void run(void) {printf("age is : %d\n", _age);} 
};


int main(void) {
    
    Superman clark("Kent");
    clark.sayName();
    clark.run();

    Spiderman peter("peter");
    peter.sayName();
    peter.run();

    return 0;
}