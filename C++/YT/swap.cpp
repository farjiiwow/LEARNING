#include <iostream>
using namespace std;

int main(void) {
    int a;
    int b;
    int c;
    cout << "Enter two number" << endl;
    scanf("%d", &a);
    scanf("%d", &b);
    cout << "Numbers before swapping" << endl;
    printf("First number : %d\n", a);
    printf("Second number : %d\n", b);
    c = a;
    a = b;
    b = c;
    cout << "Number after swapping are : " << endl;
    printf("First number : %d\n", a);
    printf("Second number : %d\n", b);
    return 0;
}