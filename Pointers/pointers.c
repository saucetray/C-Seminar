///
/// pointers.c
/// learn pointers
///

/// POINTERS are a great way to not start copying things everytime you want to send things into a function
/// or if you want to change values in another function. Maybe you want an "array" using pointers?

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/// & - gets address of that variable
/// * - dereferences a variable or takes a pointer in parameters

void change_number_wrong(int a) {
    a = 34;
}

void change_number_right(int *a) {
    *a = 34;
}

void remove_dogs(char **dogs) {
    *dogs = "No dogs.";
}

int main() {

    int a = 10;
    change_number_wrong(a);
    printf("a didn't change??: %i\n", a);
    change_number_right(&a);
    printf("a changed!!: %i\n", a);

    char *dogs = "Jimmy, Michael, Robert.";
    remove_dogs(&dogs);
    printf("%s", dogs);

}
