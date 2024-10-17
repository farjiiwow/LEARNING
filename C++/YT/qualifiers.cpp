#include <iostream>
using namespace std;

int lifeUp(void) {
    static int life = 3;
    return life = life + 1;
}

int main(void) {
    
    int life = 3;
    cout << "your starting game life is: " << life << endl;

    life = lifeUp();
    printf("Your update game life is: %d\n",life);

    life = lifeUp();
    printf("Your update game life is %d\n", life);     
    
    return 0;
}