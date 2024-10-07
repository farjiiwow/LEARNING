#include <iostream>

using namespace std;

int main(void) {
    int rating;
    puts("Enter rating");
    cin >> rating;
    if(rating == 5) {
        puts("5 star rated");
    } else if(rating == 4) {
        puts("4 star rating");
    } else {
        puts("not 5 star rated");
    }

    if(-1) {
        puts("Negative number are treated as true");
    }
    return 0;
} 