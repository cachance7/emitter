#include "emitter.h"

MagicStuff::Emitter::Emitter(int secretNumber){
    this->_secretNumber = secretNumber;
}

MagicStuff::Emitter::~Emitter(){
}

void MagicStuff::Emitter::emit(char *s){
    std::cout << s << std::endl;
}
