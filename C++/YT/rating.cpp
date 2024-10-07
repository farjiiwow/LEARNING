#include <iostream>
using namespace std;
int main(void) {
    int rating;
    puts("Enter rating ranging from 1 to 5");
    cin >> rating;
    if(rating == 5) {
        puts("Thanks for 5 star rating\n");
    } else if(rating == 4) {
        puts("Thanks for 4 star rating\n");
    } else if(rating == 3) {
        puts("Thanks for 3 star rating, what else we can improve\n");
    } else if(rating == 2) {
        puts("Thanks for 2 star rating, what are the things we can work on\n");
    } else {
        puts("We thought you have a bad experience up here, how we can improve and in which field we can improve\n");
    }
    return 0;
}