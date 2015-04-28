#include <iostream>
#include "emitter/canemit.h"
#include "emitter/emitter.h"

template <class T> void subEmit(T *ptr, char *str){
    ptr->emit(str);
    dynamic_cast<MagicStuff::CanEmit *>(ptr)->emit(str);
}

void emitIt(char *text){
    std::printf("emitIt:start\n");
    //std::shared_ptr<MagicStuff::Emitter> em = std::shared_ptr<MagicStuff::Emitter>();
    std::shared_ptr<MagicStuff::Emitter> em;
    //std::shared_ptr<MagicStuff::Emitter> em2;
    //std::shared_ptr<MagicStuff::Emitter> em3;
    //std::printf("emitIt:emitter created\n");
    em = std::make_shared<MagicStuff::Emitter>();
    subEmit(em.get(), text);
    //std::unique_ptr<MagicStuff::Emitter> em2 = std::unique_ptr<MagicStuff::Emitter>(new MagicStuff::Emitter());

    //em2->emit(text);
    //std::printf("em %s unique\n", em.unique() ? "is" : "is not");
    //std::printf("em2 %s unique\n", em2.unique() ? "is" : "is not");
    //em3 = em;
    //std::printf("em %s unique\n", em.unique() ? "is" : "is not");
    //em2 = em.allocate_shared();
    //em->emit(text);
    //em2->emit(text);
    //std::printf("Use count is %li\n", em.use_count());
    std::printf("emitIt:end\n");
}

int main(int argc, char **argv){
    if(argc > 1){
        emitIt(argv[1]);
    } else {
        std::printf("You said nothing\n");
    }
    return 0;
}
