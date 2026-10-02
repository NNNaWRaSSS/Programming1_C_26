#include <stdio.h>
#include <stddef.h>

void setToZero(int *value) {
    if (value == NULL) {
        printf("No value was supplied.\n");
        return;
    }

    *value = 0;
}

int main(void) {
    int number = 42;
    int *pointer = NULL;

    if (pointer == NULL) {
        printf("pointer does not currently point to an integer.\n");
    }

    pointer = &number;
    setToZero(pointer);
    printf("number after setToZero: %d\n", number);

    setToZero(NULL);
    return 0;
}
