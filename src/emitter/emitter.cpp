#include "emitter.h"

//MagicStuff::Emitter::Emitter()
//    :MagicStuff::Emitter::Emitter(3){}
MagicStuff::Emitter::Emitter()
    :_secretNumber(3)
{
    std::cout << "Hello from emitter constructor" << std::endl;
}

MagicStuff::Emitter::Emitter(int secretNumber){
    this->_secretNumber = secretNumber;
}

MagicStuff::Emitter::~Emitter(){
    std::cout << "So long and thanks for all the fish" << std::endl;
}

void MagicStuff::Emitter::emit(char *s){
    std::printf("Emitter::emit begin\n");
    std::printf("Emitter::emit param is %s\n", s);
    std::cout << "Emitting!! ~[" << this->_secretNumber << "] " << s << std::endl;
    std::printf("Emitter::emit end\n");
}
