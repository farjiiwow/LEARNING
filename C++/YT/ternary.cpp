#include <iostream>
using namespace std;

int main(void) {
    int rating;
    puts("Enter rating");
    cin >> rating;

    // condition ? "true block" : "false block";
    printf("Your rating is %s\n", rating > 4 ? "true block" : "false block");
    return 0;
}