#include <iostream>
#include <string.h>

using namespace std;

template <typename T>
void func(T t) {
    cout << "func one : " << t << endl;
}

template <typename T, typename... Args>
void func(T t, Args... args) {
    cout << "func two : " << t << endl;
    func(args...);
}

int main(void) {

    string myName = "farjii";
    func(1, 2, 3, 3.9, 40, 4.9, myName);
    return 0;

}