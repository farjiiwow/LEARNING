#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    
    float numbers[6] = {3.3, 2.5, 6.3, 4.7, 7.4, 9.8};

    cout << "Unsorted Values: " << endl;
    for(float n : numbers) {
        cout << n << " ";
    }

    cout << endl;
    
    sort(numbers, numbers + 6);
    // sort_heap(numbers, numbers + 6);

    cout << "Sorted Values: " << endl;
    for(float n : numbers) {
        cout << n << " ";
    }
    cout << endl;
    return 0;
}