///
/// functions.c
/// Learn about how functions behave and command line arguments
/// [identifiers] return_type name_of_function(..Parameters..)
///


#include <stdio.h>

/// first_letter_please - gets the first letter in a word (ok it also counts things that aren't letters...)
/// word - pointer to the word
/// INLINE - SUGGESTS TO COMPILER THAT THIS SHOULD REPLACE ANY WHERE first_letter_please IS CALLED REMOVES FUNCTION CALL OVERHEAD !!!! SUGGESTION !!!! CAN BE IGNORED
/// MUST BE STATIC OR EXTERN TO USE INLINE
/// STATIC FUNCTIONS CANNOT BE USED OUTSIDE THE FILE; EXTERN CAN
/// returns first char
static inline char first_letter_please(char *word) {
    return word[0];
}

/// add - adds two numbers (I'm not creative)
/// a - first number
/// b - second number
/// returns the addition
int add(int a, int b) {
    printf("Adding %i and %i together...\n", a, b);
    return a+b;
}

/// dog_id - arbitrary way to get an ID
/// a - first number
/// b - second number
/// returns an ID
int dog_id(int a, int b) {
    printf("Getting the dog's ID\n");
    return a*2 + b*4;
}

/// dog_phone_number - gets the dog's phone number (dogs are weird)
/// id - the id of the dog
/// a - the number
/// b - the other number
/// returns the dog's number
int dog_phone_number(int id, float a, double b) {
    printf("Obtaining %i's phone number...\n", id);
    return a*2 + b - id;
}

/// dog_info - gets the dog's info
/// dog1 - pointer to the first dog function
/// dog2 - pointer to the second dog function
int dog_info(int (*dog1)(int, int), int (*dog2)(int, float, double)) {
    int id = dog1(10, 12);
    printf("%i\n", id);
    printf("%i\n", dog2(id, 30.24, 12.12323));
    return id;
}

/// main - main
/// argc - number of parameters
/// argv - all arguments passed in the command line
int main(int argc, char *argv[]) {

    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
        printf("First letter of %s, %c\n", argv[i], first_letter_please(argv[i]));
    }

    printf("%i\n", add(40, 20));
    printf("%i\n", add(20, 10));

    dog_info(&dog_id, &dog_phone_number); // calls dog_info
    
}
