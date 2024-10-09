#include <iostream>
using namespace std;
int main(void) {
    printf("long size is %ld bits\n", sizeof(long) * 8 );
    printf("float size is %ld bits\n", sizeof(float) * 8 );
    printf("long size is %ld bits\n", sizeof(long) * 8 );
    printf("long double size is %ld bits\n", sizeof(long double) * 8 );
    printf("int size is %ld bits\n", sizeof(int) * 8 );

    float my_p_value = 20.2 + 20.2;

    if(my_p_value == 40.00002) {
        puts("You got it right");
    }else {
        puts("Something happen");
    }
    printf("My P value is : %f in float\n",my_p_value);
    
    return 0;
}