#ifndef CANEMIT_H
#define CANEMIT_H
namespace MagicStuff {
    class CanEmit {
        public:
            virtual void emit(char *text) =0;
    };
}
#endif
