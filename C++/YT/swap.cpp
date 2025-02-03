#include <iostream>
using namespace std;

void swap(int &a, int &b) ;

int main(void) {
    int a;
    int b;
    cout << "Enter two number" << endl;
    scanf("%d", &a);
    scanf("%d", &b);
    cout << "Numbers before swapping" << endl;
    printf("First number : %d\n", a);
    printf("Second number : %d\n", b);
    cout << "Number after swapping are : " << endl;
    swap(a, b);
    printf("First number : %d\n", a);
    printf("Second number : %d\n", b);
    return 0;
}

void swap(int &a, int &b) {
    int swap;
    swap = a;
    a = b;
    b = swap;
}