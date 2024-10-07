#include <iostream>
using namespace std;
int main(void) {
    
    int arr[] = {4, 5, 6, 7, 8, 9, 0};
    
    int i = 0;

    while(i < 7) {
        cout << "Current number is: " << arr[i] << endl;
        i = i + 1;
    }

    return 0;
}