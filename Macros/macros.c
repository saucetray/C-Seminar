///
/// Macros.c
/// How macros work?
///


#include <stdio.h>

#define MAX_VAL 4
#define DOG printf("Dog!?\n");
#define FORMAT(x) printf("Formated: %i\n", x);
#define PRINT_UNLIM(fmt, ...) printf(fmt, ##__VA_ARGS__);

int main() {

    printf("%i\n", MAX_VAL);
    DOG
    FORMAT(4)

    PRINT_UNLIM("Dogs like %s, %s, and %s\n", "bones", "food", "friends!")
}
