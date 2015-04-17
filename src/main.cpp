#include <iostream>

int main(int argc, char **argv){
    if(argc > 1){
        std::printf("You said: %s", argv[1]);
    } else {
        std::printf("You said nothing");
    }
    return 0;
}
