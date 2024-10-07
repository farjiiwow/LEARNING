#include <iostream>
using namespace std;
int main(void) {
    int rating = 3;

    switch(rating) {
        case 1:
            puts("Rated as 1 star\n");
            break;
        case 2:
            puts("Rated as 2 star\n");
            break;
        case 3:
            puts("Rated as 3 star\n");
            break;
        case 4:
            puts("Rated as 4 star\n");
            break;
        case 5: 
            puts("Rated as 5 star\n");
            break;
        default:
            puts("Please rate our app only between 1 and 5\n");
            break;
    }
    return 0;
}