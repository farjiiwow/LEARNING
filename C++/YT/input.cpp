#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string my_color;
    cout << "Enter Your fav. color: \n";
    getline(cin, my_color);
    cout << "Hey " << my_color << " is my fav. too" << endl;

    return 0;
}