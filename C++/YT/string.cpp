#include <iostream>
using namespace std;
int main(void) {
    char my_string[] = "farjiiwow";
    char my_name[] = {'f', 'a', 'r', 'j', 'i', 0};
    printf("My name is: %s\n", my_string);

    cout << "string my_name\n";
    for (int i = 0; my_name[i] != 0; i++) {
        cout << "character is : " << my_name[i] <<endl;
    }
    cout << "string my_string\n";
    for (int i = 0; my_string[i] != 0; i++) {
        cout << "character is : " << my_string[i] <<endl;
    }
    cout << "string my_string another method\n";
    for (int i = 0; my_string[i]; i++) {
        cout << "character is : " << my_string[i] <<endl;
    }
    cout << "string through pointer\n";
    for(char *cp = my_string; *cp != 0; cp++) {
        cout << "character is : " << *cp << endl;
    }
    cout << "through for each loop\n";
    for(char i: my_name) {
        if(i == 0) {
            break;
        }
        cout << "char is : " << i << endl;
    }
    return 0;
}