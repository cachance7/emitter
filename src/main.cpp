#include <iostream>
#include "emitter/emitter.h"

int main(int argc, char **argv){
    if(argc > 1){
        std::printf("You said: %s", argv[1]);
        std::shared_ptr<MagicStuff::Emitter> em = std::shared_ptr<MagicStuff::Emitter>();
        char p[] = "pop";
        em->emit(p);
    } else {
        std::printf("You said nothing");
    }
    return 0;
}
