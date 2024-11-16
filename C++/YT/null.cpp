#include <iostream>
#define NULL 0
using namespace std;

void printval(int a) {
    printf("Integer value is %d\n", a);
}

void printval(double a) {
    printf("Double value is %f\n", a);
}

void printval(int *a) {
    printf("Pointer value is %d\n", a);
}

int main(void) {

    printval(5);
    printval(5.5);
    printval(NULL);

    return 0;
}