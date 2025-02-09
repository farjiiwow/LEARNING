#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {

    vector<int> nums;
    vector<string> heros {"batman", "flash", "superman", "robin"};

    // nums.push_back(5);
    // nums.push_back(6);
    // nums.push_back(7);
    // nums.push_back(8);

    for (int i = 0; i <= 5; ++i) {
        nums.push_back(i);
    }

    for (int i = 0; i <= 5; ++i) {
        cout << nums.at(i) << endl;
    }

    cout << nums.size() << " " << nums.capacity() << " " << nums.max_size() << endl;

    cout << nums.empty() << endl;

    cout << endl;
    for (auto i = nums.begin(); i != nums.end(); ++i) {
        cout << *i << " ";
    }

    cout << endl;

    for (auto i = begin(nums); i != end(nums); ++i) {
        cout << *i << " ";
    }

    return 0;
}