///
/// main.c
/// main program kill me
///

#include <stdlib.h>
#include <stdio.h>

#include "addition.h" // import with ""

int main(int argc, char *argv[]) {

    int sum;
    int mul;

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
       
    sum = get_sum(a, b);
    mul = get_mult(a, b);

}
