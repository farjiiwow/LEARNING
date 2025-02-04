#include <iostream>
#include <string>

using namespace std;



int main(void) {
    
    static const char * originalFile = "originalFile.txt";

    FILE *fh = fopen(originalFile, "w");
    fclose(fh);

    return 0;
}