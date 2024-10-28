#include <iostream>
#include <string>
using namespace std;

string api_call() {
    return "got some data from web\n";
}

int another_api_call() {
    return 5;
}

int main(void) {
    
    auto response = api_call();     // when we don't what type of data type we are getting in respones to api call
    auto rep = another_api_call();

    cout << "API CALL VALUE: " << response;
    cout << "Anohter API CALL VALUE: " << rep << endl;
    
    if(typeid(response) == typeid(string)) {
        puts("Type of both ID is string\n");
    }

    if(typeid(rep) == typeid(int)) {
        puts("Type of both ID is int\n");
    }
    
    return 0;
}