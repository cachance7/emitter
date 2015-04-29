#include <iostream>
#include "emitter/canemit.h"
#include "emitter/emitter.h"

template <class T> void subEmit(T *ptr, char *str){
    ptr->emit(str);
    //dynamic_cast<MagicStuff::CanEmit *>(ptr)->emit(str);
}

void emitIt(char *text, int secretNumber){
    std::printf("emitIt:start\n");
    std::shared_ptr<MagicStuff::Emitter> em;
    std::printf("emitIt:shared_ptr created\n");

    // If not compiled with -std=c++11 on Mac Clang, the following will also
    // call the copy constructor and destructor twice!
    em = std::make_shared<MagicStuff::Emitter>(secretNumber);

    std::printf("emitIt:shared_ptr assigned\n");
    subEmit(em.get(), text);
    std::printf("emitIt:end\n");
}

int main(int argc, char **argv){
    if(argc > 1){
        emitIt(argv[1], argc > 2 ? atoi(argv[2]) : 0);
    } else {
        std::printf("Usage: %s <emit_param> [<secret_number>]\n", argv[0]);
    }
    return 0;
}
