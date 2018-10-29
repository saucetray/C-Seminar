///
/// allocation.c
/// Allocations on the HEAP REEEEEEEE
///


/// OKAY SO THERE IS A HEAP AND STACK OKAY WAIT LET ME DRAW IT FOR U
/// _________________________________________________________________
/// | HIGH ADDRESS (COMMAND LINE ARGUMENTS AND ENVIROMENT VARIABLES) |
/// |________________________________________________________________|
/// |                       STACK                                    |
/// |                           |                                    |
/// |                           V                                    |
/// |                                                                |
/// |                           ^                                    |
/// |                           |                                    |
/// |                         HEAP                                   |
/// |________________________________________________________________|
/// | UNINTIIZLED DATA (BSS) - INITIALIZED TO ZERO BY EXEC           |
/// |________________________________________________________________|
/// | INITIALIZED DATA                                               |
/// |________________________________________________________________|
/// | TEXT   LOW ADDRESS                                             |
/// _________________________________________________________________


/// SO WE HAVE THE HEAP THE HEAP IS COOL BECAUSE THE HEAP LIVES ON BEYOND THE STACK
/// STACK:
/// FAST ACCESS
/// MANAGED BY HEAVILY BY THE CPU
/// DO NOT HAVE TO FREE OR ALLOCATE
/// HEAP:
/// SLOWER ACCESS THAN THE STACK
/// HAVE TO MALLOC, CALLOC, OR REALLOC
/// PERSISTS THROUGH FUNCTION SCOPE
/// MUST FREE THE DATA WITH FREE() OR DATA IS SAD VALGRIND IS MAD UR KERNEL WILL PANIC EVERYTHING WILL GO WRONG

#include <stdlib.h>
#include <stdio.h>

typedef struct {
    char *name;
    int age;
    char *owner;
} Dog;

Dog *create_dog(char *name, int age, char *owner) {

    // sizeof gets the bytes the struct or object takes up
    Dog *dog = malloc(sizeof(Dog));
    
    dog->name = name;
    dog->age = age;
    dog->owner = owner;

    return dog;
}

int main() {

    Dog *dog = create_dog("Jimmy", 10, "Justin");

    printf("%s", dog->name);
    
    free(dog);

}
