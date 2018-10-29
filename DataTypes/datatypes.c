///
/// datatypes.c
/// learn more datatypes in c!!
///

#include <stdlib.h>
#include <stdio.h>

// enums are used for set possible types or values. 
// starts at 0 so RED = 0 and BLACK = 1, etc.
enum Color{RED, BLACK, GREEN, BROWN};

// structs are a model of an object
// can be used to crearte multiple instances of an object
struct Dog {
    char *name;
    int age;
    enum Color fur;
};

// Unions have access to the same memory block
// as big as the biggest datatype in it
union Puppy {
    int years;
    float age;
};

// typedef aliases something with another name!
typedef union Puppy Pupper;
typedef struct Dog Dogger;
typedef enum Color Fur_color;

// _Bool is a boolean type can include <stdbool.h> for bool 0(false) 1(true)
_Bool dog_alive;

const char *getColor(enum Color color) {
    switch (color) {
        case RED: return "Red"; break;
        case BLACK: return "Black"; break;
        case GREEN: return "Green"; break;
        case BROWN: return "Brown"; break;
    }
}

void print_dog(struct Dog *dogger) {
    printf("Name: %s, Age: %i, Color: %s\n", dogger->name, dogger->age, getColor(dogger->fur));
}

int main() {
    // Arrays type name[size]
    int dogs[100];
    for (int i = 0; i < 100; i++) {
        dogs[i] = i;
        printf("%i\n", dogs[i]);
    }
    struct Dog john = {"John", 14, RED};
    Dogger fred;
    fred.name = "Fred.";
    fred.age = 5;
    fred.fur = RED;
    print_dog(&fred);
    print_dog(&john);

    union Puppy pupper;
    pupper.age = 10.532;
    printf("Pupper has lived for %.3f time!\n", pupper.age);
    pupper.years = 10;
    printf("That is approx %i years!\n", pupper.years);
}

