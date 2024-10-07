#include <iostream>
using namespace std;
int main(void) {
    
    int arr[] = {4, 5, 6, 7, 8, 9, 0};
    
    int i = 8;

    do {
        cout << "Current number is: " << arr[i] << endl;
        i = i + 1;
    } while(i < 7);



    return 0;
}