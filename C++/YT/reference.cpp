#include <iostream>
using namespace std;

int main(void) {
    
    int score = 200;
    int second_score = 400;
    int *myp = &score;

    printf("Value of score is %d\n", score);
    printf("Value of pointer is %p\n", myp);

    int &another_score = score;
    another_score = 800;
    another_score = second_score;

    printf("Value of score is %d\n", score);
    printf("Value of pointer is %p\n", myp);

    return 0;
}