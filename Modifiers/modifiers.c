///
/// modifiers.c
/// ALL THE WAYS TO MODIFY YOUR VARIABLES
///

#include <stdio.h>
#include "test.h"

int dog3 = 3; // EXTERN FROM TEST.H

int static_example() {
    static int dog;
    dog++;
    return dog;
}


int main() {

    auto int dog; // [OPTIONAL] created in scope and destroyed when out of scope. it's default is garbage value 
    static int dog2; // [REQUIRED] created in scope but lifetime is forever (program life) initializes to 0
    volatile int dog4; // [REQUIRED] tells the program this may change without the program's doing... please don't optimize
    register int dog5; // [REQUIRED] !!!! SUGGESTS !!!! to compiler to put this variable on the register of the CPU for fast access *****WILL NOT HAVE AN ADDRESS*****

    dog = 1;

    dog5 = 10;

    printf("%i\n", dog);
    printf("%i\n", dog5);

    for(int i = 0; i < 5; i++)
        printf("%i\n", static_example());

    printf("%i\n", test_function());
}
