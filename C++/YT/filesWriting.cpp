#include <iostream>
#include <string>
using namespace std;

constexpr int maxbuffer = 1024;

int main(void) {
    
    const char * filename = "file.txt";
    const char * information = "lorem ipsum dolor sit amet";

    // FILE *fh = fopen(filename, "a");

    // for(int i = 0; i < 50; ++i) {
    //     fputs(information, fh);
    // }

    // fclose(fh);
    
    char buf[maxbuffer];

    FILE *fh = fopen(filename, "r");
    while(fgets(buf, maxbuffer, fh)) {
        fputs(buf, stdout);
    }

    fclose(fh);

    return 0;
}