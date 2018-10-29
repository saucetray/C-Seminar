/// 
/// addition.c
/// addition functions
///

#include <stdio.h>
#include "addition.h"
/// print_sum - prints the sum
/// sum - sum of the numbers
/// a - the first number
/// b - the second number
static inline void print_sum(int sum, int a, int b) {
    printf("The sum of %i and %i is %i\n", a, b, sum);
}

/// print_mult - prints multiplication
/// mul - the multiplication
/// a - the first number
/// b - the second number
static inline void print_mult(int mult, int a, int b) {
    printf("The multiplication of %i and %i is %i\n", a, b, mult);
}

int get_sum(int a, int b) {
    int sum = a + b;
    print_sum(sum, a, b);
    return sum;
}

int get_mult(int a, int b) {
    int mult = 0;

    for (int i = 0; i < b; i++) {
        mult += a;
    }
    print_mult(mult, a, b);
    return mult;
}




