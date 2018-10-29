///
/// Basic.c
/// Learn the basic data types in C
///

#include <stdio.h> // imports printing and other input/output methods
#include <stdlib.h> // imports standadrd library

/// main - allocating basic data types in c
/// char, unsigned char, signed char [%c]
/// short, short int, signed short, signed short int, unsigned short, unsigned short int [%hi, %hu]
/// int, signed, signed int, unsigned, unsigned int [%i or %d | %u]
/// long, long int, signed long, signed long int, unsigned long, unsigned long int [ add another long ] [%lu, %li]
/// float [%f]
/// double [%lf]
/// long double [%LF]
int main() {

    int x; // can declare basics without values *** unknown what value will be *** 
    x = 10; // gave x the value 10;

    char d = 'a'; // can declare and assign;

    printf("%c", d); 

}
