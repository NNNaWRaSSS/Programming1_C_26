#include <stdio.h>
#include <stddef.h>

void redirectPointer(int **destination, int *newTarget) {
    if (destination != NULL) {
        *destination = newTarget;
    }
}

int main(void) {
    int first = 30;
    int second = 80;
    int *pointer = &first;
    int **pointerToPointer = &pointer;

    printf("first: %d\n", first);
    printf("*pointer: %d\n", *pointer);
    printf("**pointerToPointer: %d\n", **pointerToPointer);

    **pointerToPointer = 45;
    printf("first after double dereference: %d\n", first);

    redirectPointer(&pointer, &second);
    printf("pointer after redirection: %d\n", *pointer);

    return 0;
}
