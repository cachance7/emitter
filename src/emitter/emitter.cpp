#include "emitter.h"

MagicStuff::Emitter::Emitter()
    :_secretNumber(0)
{
    std::cout << "Hello from emitter constructor" << std::endl;
}

MagicStuff::Emitter::Emitter(int secretNumber){
    this->_secretNumber = secretNumber;
    std::cout << "Hello from emitter constructor with param" << std::endl;
}

MagicStuff::Emitter::Emitter(const MagicStuff::Emitter& other)
    :_secretNumber(other._secretNumber)
{
    std::cout << "Hello from emitter copy constructor" << std::endl;
}

MagicStuff::Emitter::Emitter(Emitter&& other)
    :_secretNumber(0)
{
    _secretNumber = other._secretNumber;
    other._secretNumber = 0;
    std::cout << "Hello from emitter move constructor" << std::endl;
}

MagicStuff::Emitter& MagicStuff::Emitter::operator=(const Emitter& rhs)
{
    std::cout << "Hello from emitter assignment operator" << std::endl;
    _secretNumber = rhs._secretNumber;
    return *this;
}

MagicStuff::Emitter& MagicStuff::Emitter::operator=(Emitter&& rhs)
{
    std::cout << "Hello from emitter move assignment operator" << std::endl;
    _secretNumber = rhs._secretNumber;
    rhs._secretNumber = 0;
    return *this;
}

MagicStuff::Emitter::~Emitter(){
    std::cout << "So long and thanks for all the fish" << std::endl;
}

void MagicStuff::Emitter::emit(char *s){
    std::printf("Emitter::emit begin\n");
    std::printf("Emitter::emit param is %s\n", s);
    std::printf("Emitter::emit secretNumber is %d\n", this->_secretNumber);
    std::printf("Emitter::emit end\n");
}
