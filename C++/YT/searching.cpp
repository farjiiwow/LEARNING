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
    
    
    if(binary_search(numbers, numbers + 6, 7)) {
        cout << "Number Found" << endl;
    } else {
        cout << "Number Not Found" << endl;
    } 
    
    return 0;
}