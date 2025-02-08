#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    
    int numbers[6] = {3, 2, 6, 4, 7, 9};

    cout << "Unsorted Values: " << endl;
    for(int n : numbers) {
        cout << n << " ";
    }

    cout << endl;
    
    // sort(numbers, numbers + 6);
    sort_heap(numbers, numbers + 6);

    cout << "Sorted Values: " << endl;
    for(int n : numbers) {
        cout << n << " ";
    }
    cout << endl;
    return 0;
}