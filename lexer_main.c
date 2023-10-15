#include "lexer.h"

// Main Function
int main(int argNum, char **args) {
    if (argNum > 1) {
        lexer_init(args[1]);
        lexer_output();
    }
}
