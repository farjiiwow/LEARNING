#include <iostream>
using namespace std;

void sayHello(void) {
    puts("hello there!");
}

int sayTwo(void) {
    return 3;
}

int main(void) {
    
    sayHello();
    printf("%d\n", sayTwo());
    
    return 0;
}

