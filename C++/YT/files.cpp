#include <iostream>
#include <string>

using namespace std;



int main(void) {
    
    static const char * originalFile = "originalFile.txt";
    static const char * editedFile = "editedFile.txt";

    // FILE *fh = fopen(originalFile, "w");
    // fclose(fh);

    // rename(originalFile, editedFile);

    remove(editedFile);

    return 0;
}