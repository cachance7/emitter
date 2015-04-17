#include <string>
#include <iostream>
#include <ostream>
#include <cstdio>

namespace MagicStuff{
    class Emitter {
        public:
            Emitter(int secretNumber);
            ~Emitter();
            void emit(char *s);
        private:
            int _secretNumber;
    };
}
