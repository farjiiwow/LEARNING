#include <iostream>
#include <cstdint>
using namespace std;

int main(void) {
    printf("Size of this data type is %ld bits\n", sizeof(char) * 8);
    printf("Size of this data type is %ld bits\n", sizeof(short int) * 8);
    printf("Size of this data type is %ld bits\n", sizeof(int) * 8);
    printf("Size of this data type is %ld bits\n", sizeof(long int) * 8);
    printf("Size of this data type is %ld bits\n", sizeof(long long int) * 8);

    

    return 0;
}