#include <iostream>
using namespace std;

void sayHello(void) {
    puts("hello there!");
}

int sayTwo(void) {
    return 3;
}

void sayThree(void) {
    puts("4");
}

int main(void) {
    
    sayHello();
    printf("%d\n", sayTwo() + 2);
    sayThree();
    
    return 0;
}

