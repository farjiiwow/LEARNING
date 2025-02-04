#include <iostream>
#include <string>

using namespace std;


int main(void) {

    []{cout << "Hello Everyone\n";}();

    [](){return 100;};

    auto sum = [](auto a, auto b){return a + b;};

    cout << "Sum of 2 and 5 is : " << sum(2, 5) << endl;

    cout << "Sum of 2.5 and 5.5 is : " << sum(2.5, 5.5) << endl;

    string a = "abc";
    string b = "def";
    cout << sum(a, b) << endl;

    return 0;
}