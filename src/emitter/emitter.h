#ifndef EMITTER_H
#define EMITTER_H
#include <string>
#include <iostream>
#include <ostream>
#include <cstdio>
#include "canemit.h"

namespace MagicStuff{
    class Emitter : public virtual CanEmit {
        public:
            Emitter();
            Emitter(int secretNumber);
            Emitter(const Emitter& other); // copy
            Emitter(Emitter&& other); // move
            Emitter& operator=(const Emitter&);
            Emitter& operator=(Emitter&&);
            ~Emitter();
            void emit(char *s);
        private:
            int _secretNumber;
    };
}
#endif
