#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main(void) {
    
    vector<int> inty;

    inty.push_back(2);
    inty.push_back(3);
    inty.push_back(4);
    inty.push_back(5);

    cout << inty[0] << endl;
    cout << inty[2] << endl;
    cout << endl;

    cout << inty.at(0) << endl;
    cout << inty.at(1) << endl;
    cout << endl;

    cout << inty.size() << endl;
    cout << endl;
 
    for(auto i = inty.begin(); i != inty.end(); ++i) {
        cout << *i << endl;
    }

    return 0;
}