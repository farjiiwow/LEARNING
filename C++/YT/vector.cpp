#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Corners {
    float a, b, c, d;
};

ostream& operator<<(ostream& stream, const Corners corner) {
    stream << corner.a << " " << corner.b << " " << corner.c << " " << corner.d;
    return stream;
}

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
    cout  << endl;

    vector<Corners> corners;
    corners.push_back({1, 2, 3, 4});
    corners.push_back({5, 6, 7, 8});

    cout << corners[0].a << endl;
    cout << corners[0].b << endl;

    cout << corners.at(0).c << endl;
    cout << corners.at(0).d << endl;
    cout << endl;

    cout << corners.size() << endl;
    cout << endl;

    for(int i = 0; i < corners.size(); i++) {
        cout << corners[i] << endl;
    }

    return 0;
}