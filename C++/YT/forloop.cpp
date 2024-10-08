#include <iostream>
using namespace std;
int main(void) {
    int arr[] = {2, 3, 4, 5, 6};

    for(int i = 0; i < 5; i++) {
        cout << arr[i] << endl; 
    }
    cout << endl;
    for (int i:arr) {
        cout << i << endl;
    }

    return 0;
}