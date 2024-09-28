#include <iostream>
#include <string>
using namespace std;

int main() {

    string first_name, last_name;
    cout << "Enter your First Name: \n";
    getline(cin, first_name);
    cout << "Enter your Last Name: \n";
    getline(cin, last_name);

    cout << "Hello " << first_name << " " << last_name << endl;

    return 0;
}