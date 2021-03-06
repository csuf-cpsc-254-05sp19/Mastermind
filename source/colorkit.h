#ifndef COLORKIT_H
#define COLORKIT_H
//Colors generated using ansi escape sequences
namespace ansi {
    const char* RESET = "\e[00m";
    namespace foreground {
        const char* BLACK = "\e[30m";
        const char* RED = "\e[31m";
        const char* GREEN = "\e[32m";
        const char* ORANGE = "\e[33m";
        const char* BLUE = "\e[34m";
        const char* PURPLE = "\e[35m";
        const char* CYAN = "\e[36m";
        const char* WHITE = "\e[37m";
        const char* DEFAULT = "\e[39m";
    }
}
#endif
